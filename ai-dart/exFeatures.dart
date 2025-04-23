import 'dart:math';

class Features {
  double meanAmplitude = 0;
  double skewness = 0;
  double dominantFrequency = 0;
  double spectralEntropy = 0;
  double spectralCentroid = 0;
  double heartRate = 0;
  double heartRateVariability = 0;

  Features(List<double> val, int Fs) {
    calculateFeatures(val, Fs);
  }

  void calculateFeatures(List<double> val, int Fs) {
    List<double> temp = List.from(val);
    val = detrend(val, 10);
    meanAmplitude = mean(val.map((v) => v.abs()).toList());
    skewness = calculateSkewness(val);
    List<double> frequencies = calculateFrequencies(val, Fs);
    dominantFrequency = frequencies[0];
    spectralEntropy = calculateSpectralEntropy(frequencies[1]);
    spectralCentroid = calculateSpectralCentroid(frequencies[1]);
    List<double> hrAndHrv = calculateHRAndHRV(temp, Fs);
    heartRate = hrAndHrv[0];
    heartRateVariability = hrAndHrv[1];
  }

  List<double> calculateFrequencies(List<double> val, int Fs) {
    List<double> frequencies = List.filled(2, 0);
    List<double> valFFT = fft(val);
    double N = val.length.toDouble();
    List<double> f = List.generate(N ~/ 2 + 1, (i) => Fs * i / N);

    List<double> S_mag_half = List.generate(
        N ~/ 2 + 1, (i) => (i == 0 || i == N ~/ 2) ? valFFT[i] / N : 2 * valFFT[i] / N);

    int maxIdx = S_mag_half.sublist(1).indexOf(S_mag_half.sublist(1).reduce(max)) + 1;
    frequencies[0] = f[maxIdx];
    frequencies[1] = S_mag_half;

    return frequencies;
  }

  double calculateSkewness(List<double> val) {
    double sum = 0;
    double meanVal = mean(val);
    double variance = val.map((v) => pow(v - meanVal, 2)).reduce((a, b) => a + b) / val.length;
    for (double v in val) {
      sum += pow((v - meanVal) / variance, 3);
    }
    return sum / val.length;
  }

  double calculateSpectralEntropy(List<double> normSpectrum) {
    return -normSpectrum.fold(0, (prev, val) => prev + (val * log2(val + 1e-10)));
  }

  double calculateSpectralCentroid(List<double> normSpectrum) {
    List<double> f = List.generate(normSpectrum.length, (i) => i.toDouble());
    return f.fold(0, (prev, val) => prev + (val * normSpectrum[val.toInt()])) / normSpectrum.length;
  }

  List<double> calculateHRAndHRV(List<double> temp, int Fs) {
    List<double> hrHrv = [0, 0];
    List<double> tempCopy = List.from(temp);
    hrHrv[0] = calculateHeartRate(tempCopy, Fs);
    hrHrv[1] = calculateHRV(temp, Fs);
    return hrHrv;
  }

  double calculateHeartRate(List<double> signal, int Fs) {
    List<double> pxx = detrend(signal, 10);
    List<double> px = diffAbs(pxx);
    List<double> p = rescale(movmean(px, (0.08 * Fs).round()), 0, 1);
    List<int> pks = findPeaks(p, 0.4, (0.196 * Fs).round());
    return (pks.length / (signal.length / Fs)) * 60;
  }

  double calculateHRV(List<double> signal, int Fs) {
    List<double> pxx = detrend(signal, 10);
    List<double> px = diffAbs(pxx);
    List<double> p = rescale(movmean(px, (0.08 * Fs).round()), 0, 1);
    List<int> pks = findPeaks(p, 0.4, (0.196 * Fs).round());
    List<double> nnInterval = diffList(pks);
    double meanNnInterval = mean(nnInterval);
    List<double> squaredDiff = squareDiff(nnInterval, meanNnInterval);
    return sqrt(sum(squaredDiff)) / nnInterval.length;
  }

  List<double> fft(List<double> signal) {
    List<Complex> result = fftInner(signal.map((e) => Complex(e, 0)).toList(), false);
    return result.map((e) => e.real).toList();
  }

  List<Complex> fftInner(List<Complex> signal, bool inverse) {
    int n = signal.length;
    if (n == 1) {
      return signal;
    }

    List<Complex> even = fftInner(signal.whereIndexed((_, idx) => idx.isEven).toList(), inverse);
    List<Complex> odd = fftInner(signal.whereIndexed((_, idx) => idx.isOdd).toList(), inverse);

    double theta = (inverse ? 2 : -2) * pi / n;
    Complex omega = Complex(cos(theta), sin(theta));
    Complex omegaPow = Complex(1, 0);

    for (int k = 0; k < n ~/ 2; k++) {
      Complex temp = omegaPow * odd[k];
      signal[k] = even[k] + temp;
      signal[k + n ~/ 2] = even[k] - temp;
      omegaPow *= omega;
    }
    return signal;
  }

  List<double> detrend(List<double> signal, int n) {
    // Placeholder for detrend implementation
    return signal;
  }

  List<double> diffAbs(List<double> signal) {
    return List.generate(signal.length - 1, (i) => (signal[i + 1] - signal[i]).abs());
  }

  List<double> rescale(List<double> signal, double min, double max) {
    double minSignal = signal.reduce(min);
    double maxSignal = signal.reduce(max);
    return signal.map((val) => min + ((val - minSignal) / (maxSignal - minSignal)) * (max - min)).toList();
  }

  List<int> findPeaks(List<double> signal, double minPeakHeight, int minPeakDistance) {
    List<int> peaks = [];
    for (int i = 1; i < signal.length - 1; i++) {
      if (signal[i] > signal[i - 1] && signal[i] > signal[i + 1] && signal[i] > minPeakHeight) {
        if (peaks.isEmpty || i - peaks.last >= minPeakDistance) {
          peaks.add(i);
        }
      }
    }
    return peaks;
  }

  List<double> diffList(List<int> list) {
    return List.generate(list.length - 1, (i) => (list[i + 1] - list[i]).toDouble());
  }

  double mean(List<double> list) {
    return list.reduce((a, b) => a + b) / list.length;
  }

  List<double> squareDiff(List<double> list, double mean) {
    return list.map((val) => pow(val - mean, 2)).toList();
  }

  double sum(List<double> list) {
    return list.reduce((a, b) => a + b);
  }
}

class Complex {
  final double real;
  final double imaginary;

  const Complex(this.real, this.imaginary);

  Complex operator +(Complex other) => Complex(real + other.real, imaginary + other.imaginary);

  Complex operator -(Complex other) => Complex(real - other.real, imaginary - other.imaginary);

  Complex operator *(Complex other) =>
      Complex(real * other.real - imaginary * other.imaginary, real * other.imaginary + imaginary * other.real);
}

void main() {
  List<double> val = [/* your signal values here */];
  int Fs = 1000; // Sample frequency in Hz

  Features features = Features(val, Fs);

  print('Mean Amplitude: ${features.meanAmplitude}');
  print('Skewness: ${features.skewness}');
  print('Dominant Frequency: ${features.dominantFrequency}');
  print('Spectral Entropy: ${features.spectralEntropy}');
  print('Spectral Centroid: ${features.spectralCentroid}');
  print('Heart Rate: ${features.heartRate}');
  print('Heart Rate Variability: ${features.heartRateVariability}');
}
