import 'package:flutter/material.dart';
import 'Predict.dart';
void main() {
  runApp(const MyApp());
  // Example input
  List<double> features = [
    26.22132471,
    2.117672997,
    1.9,
    7.909515911,
    15.7275311,
    36,
    62.42332897
  ];

  // Call the predict function
  String output = predict(features);

  // Print the output
  print(output);
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});


  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return const MaterialApp(home: Predict(),
    );
  }
}

