class Student {
  String firstName;
  String lastName;
  int grade;
  String _status;

  Student(String firstName, String lastName, int grade) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.grade = grade;
  }

  String get getFirstName {
    return "OGR - " + this.firstName;
  }

  void set setFirstName(String value) {
    this.firstName = value;
  }

  String get getStatus {
    String message = "";
    if (this.grade >= 50) {
      message = "Passed";
    } else if (this.grade >= 40) {
      message = "make-up exam";
    } else {
      message = "Failed";
    }
    return message;
  }
}
