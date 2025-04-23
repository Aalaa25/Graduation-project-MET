import 'package:flutter/cupertino.dart';

import 'ModelWeights.dart';
import 'Classes.dart';
import 'dart:math';
class Predict extends StatefulWidget {
  const Predict({super.key});

  @override
  State<Predict> createState() => _predictState();
}

class _predictState extends State<Predict> {
  @override
  Widget build(BuildContext context) {
    return const Placeholder();
  }
}

int maxIndex(List<double> array) {
  if (array.isEmpty) {
    throw ArgumentError("The array is empty");
  }

  int maxIdx = 0;
  double maxValue = array[0];

  for (int i = 1; i < array.length; i++) {
    if (array[i] > maxValue) {
      maxValue = array[i];
      maxIdx = i;
    }
  }

  return maxIdx + 1;
}

List<double> relu(List<double> x) {
  return x.map((e) => max(0, e).toDouble()).toList();
}

List<List<T>> rotateMatrix<T>(List<List<T>> matrix) {
  int n = matrix.length;
  int m = matrix[0].length;

  // Initialize a new matrix with transposed dimensions
  List<List<T>> rotatedMatrix =
      List.generate(m, (_) => List<T>.filled(n, matrix[0][0]));

  // Transpose the matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      rotatedMatrix[j][n - i - 1] = matrix[i][j];
    }
  }

  return rotatedMatrix;
}

List<double> softMax(List<double> x) {
  double maxVal = x.reduce(max);
  List<double> exps = x.map((e) => exp(e - maxVal)).toList();
  double sumExps = exps.reduce((a, b) => a + b);
  return exps.map((e) => e / sumExps).toList();
}

List<double> computeLayerOutput(
    List<double> input, List<List<double>> weights, List<double> biases) {
  List<double> output = [];
  for (int i = 0; i < weights[0].length; i++) {
    double sum = biases[i];
    for (int j = 0; j < input.length; j++) {
      sum += input[j] * weights[j][i];
    }
    output.add(sum);
  }
  return output;
}

String predict(List<double> input) {
  // Compute first layer output with ReLU activation
  List<double> layer1Output =
      computeLayerOutput(input, Layer1Weights, Layer1Biases);
  List<double> reluOutput = relu(layer1Output);

  // Compute second layer output with SoftMax activation
  List<double> layer2Output =
      computeLayerOutput(reluOutput, (Layer2Weights), Layer2Biases);
  List<double> output = softMax(layer2Output);

  return classes_[maxIndex(output) - 1];
}

List<List<T>> permuteDimensions<T>(List<List<T>> matrix) {
  if (matrix.isEmpty || matrix[0].isEmpty) {
    return [];
  }

  int numRows = matrix.length;
  int numCols = matrix[0].length;

  // Use List.filled to initialize the inner lists with the required size
  List<List<T>> transposed =
      List.generate(numCols, (_) => List.filled(numRows, matrix[0][0]));

  for (int i = 0; i < numRows; i++) {
    for (int j = 0; j < numCols; j++) {
      transposed[j][i] = matrix[i][j];
    }
  }

  return transposed;
}
