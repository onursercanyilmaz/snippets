void main() {
var dictionary1 = new Map();
dictionary1["book"]="kitap";
dictionary1["little"] = "küçük";


// key : value
var dictionary2 = {"book":"kitap", "little":"küçük"};


//ekleme
dictionary2["big"] = "unknown";
//değiştirme
dictionary2["big"] = "büyük";

print(dictionary1);
print(dictionary2);

//silme
dictionary1.remove("book");
print(dictionary1);

//ne döndürdüğünü görmek için
//print(dictionary1.remove("book"););
//bir şey döndürmediyse remove() //void bir fonksiyondur denebilir.

//key yazdırma
print("---------KEY-------------");
for(var key in dictionary2.keys)
{
print(key);
}
//value yazdırma1
print("----------VALUE------------");
for(var key in dictionary2.keys)
{
print(dictionary2[key]);
}
//value yazdırma2
print("----------VALUE------------");
for(var value in dictionary2.values)
{
print(value);
}

//key arama
print(dictionary2.containsKey("keyboard")); //false

print(dictionary2.containsKey("book")); //true

print("------------------------");

dictionary2.forEach((k,v)=>{
print(k + " : "+ v)

});

}
