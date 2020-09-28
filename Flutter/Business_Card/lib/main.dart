import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';

void main() {
  runApp(MyApp());
}

/*class MyApp extends StatelessWidget {
  // provides hot reload
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.red,
        body: SafeArea(
          child: Column(
            //Column or Row
            //verticalDirection: VerticalDirection.up, aşağıda konumlanır
            //mainAxisAlignment: MainAxisAlignment.center, Containerları solda merkeze alır
            //mainAxisAlignment: MainAxisAlignment.spaceBetween, üst orta ve alt olarak ayırır
            crossAxisAlignment: CrossAxisAlignment
                .stretch, // bütün containerlar yatay strechlenir
            //provides more containers
            children: [
              Container(
                height: 100.0,
                width: 100.0,
//margin: EdgeInsets.symmetric(
//  vertical: 50, horizontal: 50), // her köşeden
//margin: EdgeInsets.fromLTRB(10, 10, 10, 10), // tek tek
// padding: EdgeInsets.all(5),

                color: Colors.white,
                child: Text("Contanier 1 "),
              ),
              SizedBox(
                height: 20,
              ),
              Container(
                width: 100,
                height: 100,
                color: Colors.black,
                child: Text(
                  'Container 2',
                  style: TextStyle(
                    fontSize: 20,
                    color: Colors.grey[300],
                    decoration: TextDecoration.underline,
                    decorationColor: Colors.blue,
                    decorationStyle: TextDecorationStyle.wavy,
                  ),
                ),
              ),
              Container(
                width: 100,
                height: 100,
                color: Colors.amber,
                child: Text(
                  'Container 3',
                  style: TextStyle(
                    fontSize: 20,
                    foreground: Paint()
                      ..style = PaintingStyle.stroke
                      ..strokeWidth = 1
                      ..color = Colors.blue[700],
                  ),
                ),
              ),
            ],
          ),
        ), //Container wid is similar div on web dev
      ),
    );
  }
}*/

/*class MyApp extends StatelessWidget {
  // provides hot reload
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.teal,
        body: SafeArea(
          child: Row(
            //Column or Row
            //verticalDirection: VerticalDirection.up, aşağıda konumlanır
            //mainAxisAlignment: MainAxisAlignment.center, Containerları solda merkeze alır
            mainAxisAlignment:
                MainAxisAlignment.spaceBetween, //üst orta ve alt olarak ayırır
            crossAxisAlignment: CrossAxisAlignment
                .stretch, // bütün containerlar yatay strechlenir
            //provides more containers
            children: [
              Container(
                height: 100.0,
                width: 100.0,
//margin: EdgeInsets.symmetric(
//  vertical: 50, horizontal: 50), // her köşeden
//margin: EdgeInsets.fromLTRB(10, 10, 10, 10), // tek tek
// padding: EdgeInsets.all(5),

                color: Colors.red,
                child: Text("Contanier 1 "),
              ),
              Column(
                mainAxisAlignment: MainAxisAlignment.center,
                children: [
                  Container(
                    width: 100,
                    height: 100,
                    color: Colors.amber,
                    child: Text(
                      'Container 2',
                      style: TextStyle(
                        fontSize: 20,
                        color: Colors.grey[300],
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.blue,
                        decorationStyle: TextDecorationStyle.wavy,
                      ),
                    ),
                  ),
                  Container(
                    width: 100,
                    height: 100,
                    color: Colors.yellow.withOpacity(0.5),
                    child: Text(
                      'Container 2',
                      style: TextStyle(
                        fontSize: 20,
                        color: Colors.grey[300],
                        decoration: TextDecoration.underline,
                        decorationColor: Colors.blue,
                        decorationStyle: TextDecorationStyle.wavy,
                      ),
                    ),
                  ),
                ],
              ),
              Container(
                width: 100,
                height: 100,
                color: Colors.blue,
                child: Text(
                  'Container 3',
                  style: TextStyle(
                    fontSize: 20,
                    foreground: Paint()
                      ..style = PaintingStyle.stroke
                      ..strokeWidth = 1
                      ..color = Colors.blue[700],
                  ),
                ),
              ),
            ],
          ),
        ), //Container wid is similar div on web dev
      ),
    );
  }
}  */

/*class MyApp extends StatelessWidget {
  // provides hot reload
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.red,
        body: SafeArea(
            child: Column(
          children: [
            Center(
              child: CircleAvatar(
                radius: 50,
                backgroundColor: Colors.black45,
                backgroundImage: AssetImage("images/xc.png"),
              ),
            ),
            Text(
              "Onur Sercan Yılmaz",
              style: TextStyle(
                fontFamily: 'Orbitron',
                fontSize: 25,
                color: Colors.white,
                fontWeight: FontWeight.bold,
              ),
            ),
            Text(
              "FLUTTER DEVELOPER",
              style: TextStyle(
                fontFamily: 'SourceSansPro',
                fontSize: 15,
                color: Colors.blue.shade100,
                fontWeight: FontWeight.bold,
                letterSpacing: 3.5,
              ),
            ),
            Container(
              padding: EdgeInsets.all(15.0),
              color: Colors.red.shade800,
              margin: EdgeInsets.symmetric(vertical: 10.0, horizontal: 25.0),
              child: Row(
                children: [
                  Icon(
                    Icons.phone,
                    color: Colors.white,
                  ),
                  SizedBox(
                    width: 20,
                  ),
                  Text(
                    "5xx xxx xx xx",
                    style: TextStyle(
                        color: Colors.white,
                        fontFamily: "SourceSansPro",
                        fontSize: 20),
                  )
                ],
              ),
            ),
            Container(
              padding: EdgeInsets.all(15.0),
              color: Colors.red.shade800,
              margin: EdgeInsets.symmetric(vertical: 10.0, horizontal: 25.0),
              child: Row(
                children: [
                  Icon(
                    Icons.mail,
                    color: Colors.white,
                  ),
                  SizedBox(
                    width: 20,
                  ),
                  Text(
                    "onursercanyilmaz@example.com",
                    style: TextStyle(
                        color: Colors.white,
                        fontFamily: "SourceSansPro",
                        fontSize: 15),
                  )
                ],
              ),
            )
          ],
        )), //Container wid is similar div on web dev
      ),
    );
  }
} */

class MyApp extends StatelessWidget {
  // provides hot reload
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        backgroundColor: Colors.red,
        body: SafeArea(
            child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Center(
              child: CircleAvatar(
                radius: 50,
                backgroundColor: Colors.black45,
                backgroundImage: AssetImage("images/xc.png"),
              ),
            ),
            Text(
              "Onur Sercan Yılmaz",
              style: TextStyle(
                fontFamily: 'Orbitron',
                fontSize: 25,
                color: Colors.white,
                fontWeight: FontWeight.bold,
              ),
            ),
            Text(
              "FLUTTER DEVELOPER",
              style: TextStyle(
                fontFamily: 'SourceSansPro',
                fontSize: 15,
                color: Colors.blue.shade100,
                fontWeight: FontWeight.bold,
                letterSpacing: 3.5,
              ),
            ),
            SizedBox(
              height: 20.0,
              width: 200,
              child: Divider(
                color: Colors.black54,
              ),
            ),
            Card(
              color: Colors.red.shade800,
              margin: EdgeInsets.symmetric(vertical: 10.0, horizontal: 25.0),
              child: ListTile(
                leading: Icon(
                  Icons.phone,
                  color: Colors.white,
                ),
                title: Text(
                  "5xx xxx xx xx",
                  style: TextStyle(
                      color: Colors.white,
                      fontFamily: "SourceSansPro",
                      fontSize: 20),
                ),
              ),
            ),
            Card(
              color: Colors.red.shade800,
              margin: EdgeInsets.symmetric(vertical: 10.0, horizontal: 25.0),
              child: ListTile(
                leading: Icon(
                  Icons.mail,
                  color: Colors.white,
                ),
                title: Text(
                  "onursercanyilmaz@example.com",
                  style: TextStyle(
                      color: Colors.white,
                      fontFamily: "SourceSansPro",
                      fontSize: 15),
                ),
              ),
            )
          ],
        )), //Container wid is similar div on web dev
      ),
    );
  }
}
