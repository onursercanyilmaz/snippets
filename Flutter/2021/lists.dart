void main() {
  var urunler = new List(5);
  urunler[0] = "Laptop";
  urunler[1] = "Mouse";
  urunler[2] = "Keyboard";
  urunler[3] = "Monitor";
  urunler[4] = "Mic";

  print(urunler);
  print(urunler[3]);

  //Growable List
//Bellek tüketimi daha fazla
  var cities = ["Ankara", "İstanbul", "İzmir"];

  print(cities);

  cities.add("Adana");
  
  print(cities);

//a harfini içeren illeri yaz
  print(cities.where((s)=>s.contains("a")));

//ilk elemanı yazdırma
  print(cities.first);
//tersten yazırma
  print(cities.reversed);


}
