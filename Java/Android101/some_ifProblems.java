package Android101;


import java.io.IOException;
import java.text.DecimalFormat;
import java.util.Scanner;

import javax.swing.text.AsyncBoxView;



public class some_ifProblems {
    public static void main(String args[])
    {
        System.out.println("--------Problem 1--------");

        /* x > 0 ise f(x)= 1 / ( 1 + ln x )  ve g(x)= 1 / ( x + ln x )
          x≤0 ise f(x) = 1 / ( 1+ x2 ) ve g(x)=1 / ( 1 + x + x2 )

şeklinde tanımlanıyor. 
x değeri klavyeden girildiğinde,
 f(x) ve g(x)’i hesaplatan ve yazdıran 
 bir Java programı yazalım. */

        Scanner user = new Scanner(System.in);
        double x, resultf, resultg;
        System.out.println("Please enter a x value: ");
        x = user.nextDouble();

        if(x>0)
        {
            resultf = (1/(1+ Math.log(x)));
            resultg = (1/(x+ Math.log(x)));
        
        }
        else{
            resultf = (1/(1+  x*x));
            resultg = (1/(1 + x + x*x));
        }
        System.out.println("Result f(x): "+resultf);
        System.out.println("Result g(x): "+resultg);

        

        System.out.println("--------Problem 2--------");

        /*Bir satış elemanının sattığı ürün miktarına göre alacağı günlük ücret aşağıdaki gibi belirleniyor:

    Günlük satış miktarı 50 adetten az ise 15 TL tutarındaki sabit ücrete, satılan ürün başına 1 TL değerinde prim eklenerek günlük ücret belirlenir.
    Günlük satış miktarı 50 adet ya da daha fazla ise, bu durumda günlük sabit ücret 15 TL alınarak, satılan ürün başına da ilk 50 adet ürün için 2 TL, 50 adedi aşan kısım için de 3 TL prim verilerek günlük ücret belirlenir.

Bir satıcının günlük satış miktarı bilgisayara girildiğinde satıcının alacağı günlük ücreti hesaplayan bir Java programı yazınız. */

        Scanner user2 = new Scanner(System.in);
        double satis, ucret;
        DecimalFormat nf = new DecimalFormat("###,###,00");
        System.out.println("Günlük satılan ürün sayısı: ");
        
        satis = user2.nextDouble();
        if(satis<50)
        {
            ucret = 15+satis*1;
        }else{
            ucret = 15+50*2 + (satis-50)*3;
        }
        System.out.println("Kazanılan: "+ucret);

        System.out.println("--------Problem 3--------");
    /*Bilgisayara negatif olmayan bir sayı girildiğinde bu sayının karekökünü hesaplayan, negatif bir sayı girildiğinde ise kullanıcıyı uyaran bir Java programı yazalım.
     */
    
     int sayi, result;
     Scanner user3 = new Scanner(System.in);
     sayi = user3.nextInt();

     if(sayi >= 0)
     {
         result = sayi*sayi;
         System.out.println("Sayının karekökü: " +result);
     }else{
         System.out.println("Girilen sayı negatif olammalı!");
     }


     System.out.println("--------Problem 4--------");
    /*En küçük sayıyı bulma */

    int a,b,c,kucukSayi;
    Scanner input = new Scanner(System.in);
    System.out.println("Lütfen 3 sayı girin: ");
    a= input.nextInt();
    b= input.nextInt();
    c= input.nextInt();

    kucukSayi = a;
    if(kucukSayi>b)
    {
        kucukSayi = b;
    }
    else if(kucukSayi>c){
        kucukSayi = c;
    }
    System.out.println("En küçük sayı: "+kucukSayi);

    
    System.out.println("--------Problem 5--------");
    /* ? operatorü */
    Scanner enter = new Scanner(System.in);

    String sonuc; double not;
    System.out.println("Sınav notunu gir: ");
    not = enter.nextDouble();
    sonuc = not >= 50 ? "Basarılı" : "Başarısız";
    System.out.println("Sonuc: "+sonuc);    

    }
}