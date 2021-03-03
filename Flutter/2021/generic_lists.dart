void main() {
// as array

var cities = List(3);
cities[0] = "Ankara";
cities[1] = 2000;
cities[2] = "İzmir";
print(cities);

//type safety
var city = List<String>(3);
city[0] = "Ankara";
city[1] = "2000";
city[2] = "İzmir";
print(city);

var prod = ["Laptop", "Mouse", "Keyboard"];
print(prod);

var prod1 = Product("TV", 500);
var prod2 = Product("Oven", 600);
List<Product> products = [prod1,prod2];
print(products[0].name +" "+ products[0].unitPrice.toString());

}

class Product{

String name;
double unitPrice;

Product(String name, double unitPrice)
{
this.name = name;
this.unitPrice = unitPrice;
}

}

