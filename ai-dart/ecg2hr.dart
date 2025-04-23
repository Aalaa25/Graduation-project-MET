import 'dart:math';

void ecg2hr(List<double> signal, int fs) {
  // Detrend the signal to remove baseline wandering
  List<double> pxx = detrend(signal, 10);

  // Focusing on [5 26] Hz frequencies (bandpass filter)
  // List<double> pxx = bandpass(signal, [5, 26], fs);

  // Calculating the absolute of the differentiated signal
  List<double> px = diffAbs(pxx);

  // Rescaling the signal between 0 and 1
  List<double> p = rescale(movmean(px, (0.08 * fs).round()), 0, 1);

  // Searching for peaks
  List<int> pks = findPeaks(p, 0.4, (0.196 * fs).round());

  // Calculating heart rate
  double hr = (pks.length / (signal.length / fs)) * 60;

  // Calculating heart rate variability (SDNN method)
  List<double> nnInterval = diffList(pks);
  double meanNnInterval = mean(nnInterval);
  List<double> squaredDiff = squareDiff(nnInterval, meanNnInterval);
  double hrv = sqrt(sum(squaredDiff)) / nnInterval.length;

  print('Heart Rate: $hr bpm');
  print('Heart Rate Variability (SDNN): $hrv');
}

List<double> detrend(List<double> signal, int n) {
  // Implementation of detrend function
  // Not provided in Dart since it's not directly available in the standard library
  return signal; // Placeholder, replace with actual implementation
}

List<double> diffAbs(List<double> signal) {
  List<double> result = [];
  for (int i = 1; i < signal.length; i++) {
    result.add((signal[i] - signal[i - 1]).abs());
  }
  return result;
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
  List<double> result = [];
  for (int i = 1; i < list.length; i++) {
    result.add((list[i] - list[i - 1]).toDouble());
  }
  return result;
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

void main() {
  List<double> ecgSignal = [/* your ECG signal values here */];
  int fs = 1000; // Sample frequency in Hz

  ecg2hr(ecgSignal, fs);
}
