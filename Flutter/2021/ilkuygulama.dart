import 'package:flutter/material.dart';

void main() {
  String mesaj = "İlk Uygulamam!";
  runApp(MaterialApp(
    home: Scaffold(
      appBar: AppBar(
        title: Text(mesaj),
      ),
      body: Center(
        child: Text("Body"),
      ),
    ),
  ));
}

//scaffold: tam olarak appbar ve gövdeden oluşan bir widget

//Material App > Scaffold > AppBar & Center > Text
