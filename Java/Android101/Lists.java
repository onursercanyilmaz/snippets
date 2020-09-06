package Android101;

import java.util.ArrayList;
import java.util.List;

public class Lists {
    
    public static void main(String[] args)
    {
        //List Interface
        /*     
    add (E e): Bir objeyi listeye ekler.
    add (int index, E e): Bir objeyi listede istenen dizine (index) ekler.
    clear: Bütün elemanları siler.
    contains: Bir objenin dizi içerisinde olup olmadığını kontrol eder.
    get (int index): Dizi içerisinde belirli bir dizindeki objeyi verir.
    remove (E e): Belli bir objeyi siler.
    remove (int i): Belli bir dizindeki objeyi siler ve dizini günceller.
    size: O anda dizide kaç adet eleman olduğunu söyler (add metodu ile eklenmiş).
    subList (int from, int to): İki dizin arasındaki elemanlardan yeni bir dizi oluşturur.
    set (int index, E element): Belli bir dizindeki objeyi yenisiyle değiştirir.
 */

        //Ekleme
        List<String> arrList = new ArrayList<String>();
        arrList.add("Onur");
        arrList.add("Onur"); //Yazar
        arrList.add("Sercan");
        arrList.add("Yilmaz");
        arrList.add(0,"Orçun"); //Orçun stringi Onur'un önüne geçer.

        for(String str : arrList) //foreach döngüsü ile görüntüleme
        {
            System.out.println(str);
        }

        //Dizi içerisinde mevcut mu?
        if(arrList.contains("Onur"))
        {
            System.out.println("Onur Listede Mevcut...");
        }

        arrList.clear(); //Listeyi siler

        if(arrList.size()==0) //Liste boşsa çıktı verir.
        {
            System.out.println("Liste boş!");
        }

        
    }
}
