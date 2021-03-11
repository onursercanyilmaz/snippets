import 'package:flutter/material.dart';
import 'package:temel_widget/screens/student_add.dart';
import 'package:temel_widget/screens/student_edit.dart';
import 'models/student.dart';

void main() {
  runApp(MaterialApp(home: MyApp()));
}

//scaffold: tam olarak appbar ve gövdeden oluşan bir widget

//Material App > Scaffold > AppBar & Center > Text

//my widget
class MyApp extends StatefulWidget {
  @override
  _MyAppState createState() => _MyAppState();
}

class _MyAppState extends State<MyApp> {
  String mesaj = "Result Page";

  Student selectedStudent = Student.withId(0, "", "", 0);

  List<Student> students = [
    Student.withId(1, "Onur Sercan", "Yılmaz", 45),
    Student.withId(2, "Berkay Reşat", "Bor", 77),
    Student.withId(3, "Serkan", "Taşlıçay", 25)
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
                        "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQk0Gnxh-jKLgCN7_uiPGUnelRc-ph3H-8z8w&usqp=CAU",
                      ),
                    )
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
              onTap: () {
                setState(() {
                  //thanks to statefulwidget
                  selectedStudent = students[index];
                });
                return selectedStudent.firstName;
              },
            );
          },
          itemCount: students.length,
        )),
        Text("Seçili öğrenci : " + selectedStudent.firstName),
        Row(
          children: <Widget>[
            Flexible(
              fit: FlexFit.tight,
              flex: 1,
              child: RaisedButton(
                color: Colors.greenAccent,
                child: Row(
                  children: [
                    Icon(Icons.add),
                    SizedBox(
                      width: 5,
                    ),
                    Text("Add"),
                  ],
                ),
                onPressed: () {
                  //Navigation
                  Navigator.push(
                      context,
                      MaterialPageRoute(
                          builder: (context) => StudentAdd(students)));
                },
              ),
            ),
            Flexible(
              fit: FlexFit.tight,
              flex: 1,
              child: RaisedButton(
                color: Colors.blueAccent,
                child: Row(
                  children: [
                    Icon(Icons.update),
                    SizedBox(
                      width: 5,
                    ),
                    Text("Update"),
                  ],
                ),
                onPressed: () {
                  Navigator.push(
                      context,
                      MaterialPageRoute(
                          builder: (context) => StudentEdit(selectedStudent)));
                },
              ),
            ),
            Flexible(
              fit: FlexFit.tight,
              flex: 1, //size percentage
              child: RaisedButton(
                color: Colors.redAccent,
                child: Row(
                  children: [
                    Icon(Icons.delete),
                    SizedBox(
                      width: 5,
                    ),
                    Text("Delete"),
                  ],
                ),
                onPressed: () {
                  setState(() {
                    students.remove(selectedStudent);
                  });

                  var mes = "Deleted Successfully!";
                  showMessage(context, mes);
                },
              ),
            ),
          ],
        ),
      ],
    );
  }
/*
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

 */

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
    title: Text("Process Result"),
    content: Text(message),
  );

  showDialog(context: context, builder: (BuildContext context) => alert);
  //context widget ağaç yapısındaki bilgiyi tutan yapıdır.
}
