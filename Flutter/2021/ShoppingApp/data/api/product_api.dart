import "package:http/http.dart" as http;

class ProductApi {
  //statik yapılar içerir
  static Future getProducts() {
    var url = Uri.tryParse("http://10.0.2.2:3000/products");
    return http.get(url);
  }

  static Future getProductsByCategoryId(int categoryId) {
    var url =
        Uri.tryParse("http://10.0.2.2:3000/products?categoryId=$categoryId");
    return http.get(url);
  }
}
