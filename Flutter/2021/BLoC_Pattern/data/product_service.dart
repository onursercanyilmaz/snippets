import 'package:bloc_sample/models/product.dart';

class ProductService {
  // ignore: deprecated_member_use
  static List<Product> products = List<Product>();

  static ProductService _singleton = ProductService._internal();
  factory ProductService() {
    // named constructor çağırılması gerekiyor
    //factory arkada instance oluşturuyor, her çağırılışında bellekteki instance'ı hızlıca veriyor
    return _singleton;
  }
  ProductService._internal();
  static List<Product> getAll() {
    products.add(new Product(1, "Acer Laptop", 5000));
    products.add(new Product(2, "Xiaomi Phone", 2000));
    products.add(new Product(3, "Leonardo's Canvas", 10000));
    return products;

    //singleton
  }
}
