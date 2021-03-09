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
                  Navigator.push(context,
                      MaterialPageRoute(builder: (context) => StudentAdd()));
                },
              ),
