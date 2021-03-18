import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:http_demo/data/api/category_api.dart';
import 'package:http_demo/data/api/product_api.dart';
import 'package:http_demo/models/category.dart';
import 'package:http_demo/models/product.dart';
import 'package:http_demo/widgets/product_list_widget.dart';

class MainScreen extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return _MainScreenState();
  }
}

class _MainScreenState extends State {
  List<Category> categories = List<Category>();
  List<Widget> categoryWidgets = List<Widget>();
  List<Product> products = List<Product>();

  @override
  void initState() {
    getCategoriesFromApi();
    getProducts();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(
          "🛍️ Shopping App",
          style: TextStyle(color: Colors.white),
        ),
        backgroundColor: Colors.green,
        centerTitle: true,
      ),
      body: Padding(
        padding: EdgeInsets.all(10.0),
        child: Column(
          children: [
            SingleChildScrollView(
              scrollDirection: Axis.horizontal, //yatay kaydırma
              child: Row(
                children: categoryWidgets,
              ),
            ),
            ProductListWidget(products),
          ],
        ),
      ),
    );
  }

  void getCategoriesFromApi() {
    CategoryApi.getCategories().then((response) {
      setState(() {
        Iterable list = json.decode(response
            .body); // iterable iterasyon tasarım deseni, array list hepsi iterable
        this.categories =
            list.map((category) => Category.formJson(category)).toList();
        getCategoryWidgets();
      });
    });
  }

  List<Widget> getCategoryWidgets() {
    for (int i = 0; i < categories.length; i++) {
      categoryWidgets.add(getCategoryWidget(categories[i]));
    }
    return categoryWidgets;
  }

  Widget getCategoryWidget(Category category) {
    return Row(children: [
      FlatButton(
        child: Text(
          category.categoryName,
          style: TextStyle(color: Colors.green),
        ),
        shape: RoundedRectangleBorder(
            borderRadius: BorderRadius.circular(15.0),
            side: BorderSide(color: Colors.green)),
        onPressed: () {
          getProductsByCategoryId(category);
        },

        /*color: DecoratedBox(
          decoration: BoxDecoration(
            gradient: RadialGradient(
              center: const Alignment(-0.5,-0.6),
              radius: 0.15,
               colors: <Color>[
          const Color(0xFFEEEEEE),
          const Color(0xFF111133),
        ],
        stops: <double>[0.9, 1.0],
            ),
          ),
        ),*/
      ),
      SizedBox(
        width: 10,
      ),
    ]);
  }

  void getProductsByCategoryId(Category category) {
    ProductApi.getProductsByCategoryId(category.id).then((response) {
      setState(() {
        Iterable list = json.decode(response.body);
        this.products =
            list.map((product) => Product.formJson(product)).toList();
      });
    });
  }

  void getProducts() {
    ProductApi.getProducts().then((response) {
      setState(() {
        Iterable list = json.decode(response.body);
        this.products =
            list.map((product) => Product.formJson(product)).toList();
      });
    });
  }
}
