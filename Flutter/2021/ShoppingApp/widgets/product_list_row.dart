import 'package:flutter/material.dart';
import 'package:http_demo/models/product.dart';

class ProductListRowWidget extends StatelessWidget {
  Product product;

  ProductListRowWidget(this.product);
  @override
  Widget build(BuildContext context) {
    return buildProductItemCard(context);
  }

  Widget buildProductItemCard(BuildContext context) {
    return InkWell(
      child: Card(
        child: Column(
          children: [
            Container(
              child: Image.network(
                  "https://cdn.pixabay.com/photo/2014/03/28/11/49/pineapple-300038_1280.png"),
              height: 130.0,
              width: MediaQuery.of(context).size.width / 2,
            ),
            Text(product.productName),
            Text(
              product.unitPrice.toString(),
              style: TextStyle(fontSize: 18.0, color: Colors.blue),
            ),
          ],
        ),
      ),
    );
  }
}
