import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

//scaffold: tam olarak appbar ve gövdeden oluşan bir widget

//Material App > Scaffold > AppBar & Center > Text

//my widget
class MyApp extends StatelessWidget {
  String mesaj = "İlk Uygulamam!";
  var students = [
    "Onur Sercan",
    "Berkay Bor",
    "Serkan Taşlıçay",
    "Enes",
    "Mustafa",
    "Kemal"
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
        appBar: AppBar(
          title: Text(mesaj),
        ),
        body: Column(
          children: <Widget>[
            Expanded(
                //farklı cihazlarda da güzel sonuçlar verir
                child: ListView.builder(
              itemBuilder: (BuildContext context, int index) {
                return Text(students[index]);
              },
              itemCount: students.length,
            )),
            Center(
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
                      context: context,
                      builder: (BuildContext context) => alert);
                  //context widget ağaç yapısındaki bilgiyi tutan yapıdır.
                },
              ),
            ),
          ],
        ));
  }
}

/*
* ListView(
                children: <Widget>[
                  Text("Onur"),
                  Text("Sercan"),
                  Text("Yılmaz"),
                ],
              ),
* */
