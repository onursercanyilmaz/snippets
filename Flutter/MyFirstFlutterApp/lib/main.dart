import 'package:flutter/material.dart';

void main() => runApp(
      MaterialApp(
        home: Scaffold(
          backgroundColor: Color(0xff1F2425), //0xff mean "#"
          appBar: AppBar(
            centerTitle: true,
            title: Text("Google DSC Zaim"),
            backgroundColor: Colors.red,
          ),
          body: Center(
            //Alt+Enter to change sth
            child: Image(
              // image: NetworkImage(
              //   "https://i.ytimg.com/vi/US5XCemDjBo/hqdefault.jpg"),
              image: AssetImage("images/google_developers_logomark_white.png"),
            ),
          ),
        ),
      ),
    );
