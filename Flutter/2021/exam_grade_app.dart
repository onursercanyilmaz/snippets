import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

//scaffold: tam olarak appbar ve gövdeden oluşan bir widget

//Material App > Scaffold > AppBar & Center > Text

//my widget
class MyApp extends StatelessWidget {
  String mesaj = "İlk Uygulamam!";

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(mesaj),
      ),
      body: Center(
        child: RaisedButton(
          child: Text("Result"),
          onPressed: () {
            int mark = 30;
            String message = "";
            if (mark >= 50) {
              message = "Passed";
            } else if (mark >= 40) {
              message = "make-up exam";
            } else {
              message = "Failed";
            }
            var alert = AlertDialog(
              title: Text("Exam Result"),
              content: Text(message),
            );
            showDialog(
                context: context, builder: (BuildContext context) => alert);
            //context widget ağaç yapısındaki bilgiyi tutan yapıdır.
          },
        ),
      ),
    );
  }
}
