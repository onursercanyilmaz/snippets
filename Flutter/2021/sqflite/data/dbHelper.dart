import 'dart:async';
import 'dart:ffi';

import 'package:path/path.dart';
import 'package:sqflite/sqflite.dart';
import 'package:sqflite_demo/models/product.dart';

class DBHelper {
  Database _db;

  Future<Database> get db async {
    //more activity at the same time : async
    if (_db == null) {
      _db = await initializeDb(); //if there is not db, create
    }
    return _db; // if there is db, return it
  }

  Future<Database> initializeDb() async {
    String dbPath = join(await getDatabasesPath(), "eterate.db");
    var eTerateDB = openDatabase(dbPath, version: 1, onCreate: createDb);
    return eTerateDB;
  }

  void createDb(Database db, int version) async {
    await db.execute(
        "CREATE TABLE Products(id integer primary key, name text, description text, unitPrice integer)");
  }

  Future<List<Product>> getProducts() async {
    Database db = await this.db;
    var result = await db.query("Products");

    return List.generate(result.length, (index) {
      return Product.fromObject(result[index]);
    });
  }

  Future<int> insert(Product product) async {
    Database db = await this.db;
    var result = await db.insert("Products", product.toMap());
  }

  Future<int> delete(int id) async {
    Database db = await this.db;
    var result = await db.rawDelete("DELETE FROM Products WHERE id=$id");
    return result;
  }

  Future<int> update(Product product) async {
    Database db = await this.db;
    var result = await db.update("Products", product.toMap(),
        where: "id=?", whereArgs: [product.id]);
    return result;
  }
}
