import 'package:cloud_firestore/cloud_firestore.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        // This is the theme of your application.
        //
        // Try running your application with "flutter run". You'll see the
        // application has a blue toolbar. Then, without quitting the app, try
        // changing the primarySwatch below to Colors.green and then invoke
        // "hot reload" (press "r" in the console where you ran "flutter run",
        // or simply save your changes to "hot reload" in a Flutter IDE).
        // Notice that the counter didn't reset back to zero; the application
        // is not restarted.
        primarySwatch: Colors.blue,
      ),
      home: Scaffold(
        appBar: AppBar(
          title: Text("Survey"),
        ),
        body: SurveyList(),
      ),
    );
  }
}

class SurveyList extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return SurveyListState();
  }
}

class SurveyListState extends State {
  @override
  Widget build(BuildContext context) {
    return StreamBuilder<QuerySnapshot>(
        stream: Firestore.instance.collection("languagesurvey").snapshots(),
        builder: (context, snapshot) {
          if (!snapshot.hasData) {
            return LinearProgressIndicator();
          } else {
            return buildBody(context, snapshot.data.documents);
          }
        });
    //return buildBody(context, sahteSnapshot);
  }

  Widget buildBody(BuildContext context, List<DocumentSnapshot> sahteSnapshot) {
    return ListView(
      padding: EdgeInsets.only(top: 20.0),
      children: sahteSnapshot
          .map<Widget>((data) => buildListItem(context, data))
          .toList(),
    );
  }

  buildListItem(BuildContext context, DocumentSnapshot data) {
    final row = Survey.fromSnapshot(data);
    return Padding(
      key: ValueKey(row.name),
      padding: EdgeInsets.symmetric(horizontal: 16.0, vertical: 8.0),
      child: Container(
        decoration: BoxDecoration(
            border: Border.all(color: Colors.redAccent),
            borderRadius: BorderRadius.circular(5.0)),
        child: ListTile(
          title: Text(row.name),
          trailing: Text(row.count.toString()),
          onTap: () => Firestore.instance.runTransaction((transaction) async {
            final freshSnapshot = await transaction.get(row.reference);
            final fresh = Survey.fromSnapshot(freshSnapshot);

            await transaction.update(row.reference, {'count': fresh.count + 1});
          }),
        ),
      ),
    );
  }
}

class Survey {
  String name;
  int count;
  DocumentReference reference;

  Survey.fromMap(Map<String, dynamic> map, [this.reference])
      : assert(map["name"] != null),
        assert(map["count"] != null),
        name = map["name"],
        count = map["count"];

  Survey.fromSnapshot(DocumentSnapshot snapshot)
      : this.fromMap(snapshot.data, snapshot.reference);
}

final sahteSnapshot = [
  {"name": "C#", "count": 75},
  {"name": "Java", "count": 5},
  {"name": "Dart", "count": 7},
  {"name": "C++", "count": 90},
  {"name": "Python", "count": 30},
  {"name": "Perl", "count": 3}
];
