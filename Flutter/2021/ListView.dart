import 'package:flutter/material.dart';

import 'models/student.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

//scaffold: tam olarak appbar ve gövdeden oluşan bir widget

//Material App > Scaffold > AppBar & Center > Text

//my widget
class MyApp extends StatelessWidget {
  String mesaj = "Result Page";
  List<Student> students = [
    Student("Onur Sercan", "Yılmaz", 45),
    Student("Berkay Reşat", "Bor", 77),
    Student("Serkan", "Taşlıçay", 25)
  ];

  var studentss = [
    "Onur Sercan Yılmaz",
    "Berkay Bor",
    "Serkan Taşlıçay",
    "Kemal Mehmet",
    "Ali Şahin"
  ];

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(mesaj),
      ),
      body: buildBody(context),
    );
  }

  Widget buildBody(BuildContext context) {
    return Column(
      children: <Widget>[
        Expanded(
            //farklı cihazlarda da güzel sonuçlar verir
            child: ListView.builder(
          itemBuilder: (BuildContext context, int index) {
            return ListTile(
              leading: Container(
                child: Column(
                  children: [
                    CircleAvatar(
                      backgroundImage: NetworkImage(
                          "https://media-exp1.licdn.com/dms/image/C4D03AQEIY5a6tad9tA/profile-displayphoto-shrink_200_200/0/1601556741918?e=1614816000&v=beta&t=rfMqiWPgXtjTEBR3tB5BddTomB5fhf7YLR0nS_C_O74"),
                    ),
                  ],
                ),
              ),
              title: Text(
                  students[index].firstName + " " + students[index].lastName),
              subtitle: Text("Exam Result: " +
                  students[index].grade.toString() +
                  " [" +
                  students[index].getStatus +
                  "]"),
              trailing: buildStatusIcon(students[index].grade),
              onTap: () {},
            );
          },
          itemCount: students.length,
        )),
        Center(
          child: RaisedButton(
            child: Text("Result"),
            onPressed: () {
              var mes = resultCalc(20);

              showMessage(context, mes);
            },
          ),
        ),
      ],
    );
  }

  String resultCalc(int mark) {
    String message = "";
    if (mark >= 50) {
      message = "Passed";
    } else if (mark >= 40) {
      message = "make-up exam";
    } else {
      message = "Failed";
    }
    return message;
  }

  Widget buildStatusIcon(int grade) {
    if (grade >= 50) {
      return Icon(Icons.done);
    } else if (grade >= 40) {
      return Icon(Icons.album);
    } else {
      return Icon(Icons.clear);
    }
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

void showMessage(BuildContext context, String message) {
  var alert = AlertDialog(
    title: Text("Exam Result"),
    content: Text(message),
  );

  showDialog(context: context, builder: (BuildContext context) => alert);
  //context widget ağaç yapısındaki bilgiyi tutan yapıdır.
}
