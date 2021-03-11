import 'package:flutter/material.dart';
import 'package:temel_widget/models/student.dart';
import 'package:temel_widget/validarion/student_validator.dart';

class StudentEdit extends StatefulWidget {
  Student selectedStudents;
  StudentEdit(Student selectedStudents) {
    this.selectedStudents = selectedStudents;
  }
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return _StudentEditState(selectedStudents);
  }
}

class _StudentEditState extends State with StudentValidationMixin {
  Student selectedStudents;
  var formKey = GlobalKey<FormState>();

  _StudentEditState(Student selectedStudents) {
    this.selectedStudents = selectedStudents;
  }

  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return Scaffold(
      appBar: AppBar(
        title: Text("Edit selected student"),
      ),
      body: Container(
        margin: EdgeInsets.all(20.0), //margin verir
        child: Form(
          key: formKey,
          child: Column(
            children: <Widget>[
              buildFirstNameField(),
              buildLastNameField(),
              buildGradeField(),
              buildSubmitButton(),
            ],
          ),
        ),
      ),
    );
  }

  Widget buildFirstNameField() {
    return TextFormField(
      initialValue: selectedStudents.firstName,
      decoration:
          InputDecoration(labelText: "Öğrenci Adı", hintText: "Onur Sercan"),
      validator: validateLastName, //girilecek karakterlerin uygunluğu
      onSaved: (String value) {
        selectedStudents.firstName = value;
      },
    );
  }

  Widget buildLastNameField() {
    return TextFormField(
      initialValue: selectedStudents.lastName,
      decoration:
          InputDecoration(labelText: "Öğrenci Soyadı", hintText: "Yılmaz"),
      validator: validateLastName, //girilecek karakterlerin uygunluğu
      onSaved: (String value) {
        selectedStudents.lastName = value;
      },
    );
  }

  Widget buildGradeField() {
    return TextFormField(
      initialValue: selectedStudents.grade.toString(),
      decoration: InputDecoration(labelText: "Aldığı Not", hintText: "60"),
      validator: validateGrade, //girilecek karakterlerin uygunluğu
      onSaved: (value) {
        selectedStudents.grade = int.parse(value);
      },
    );
  }

  Widget buildSubmitButton() {
    return RaisedButton(
      child: Text("Kaydet"),
      onPressed: () {
        if (formKey.currentState.validate()) {
          formKey.currentState.save();

          saveStudent();
          Navigator.pop(context);
        }
      },
    );
  }

  void saveStudent() {
    print(selectedStudents.firstName);
    print(selectedStudents.lastName);
    print(selectedStudents.grade);
  }
}

//Ekranda veri değişecekse statefull
