package Android101;

public class Operatorler {

    public static void main(String args[])
    {
        int x, y = -5;

        //Negatifini alma operatörü
        x=16- -y; // -*- = +
        System.out.println("x: "+x); //11

        System.out.println("y1: "+ y); //-5
        System.out.println("y2: "+ y--); //-5
            //DİKKAT! y=-6 oldu!!
        System.out.println("y3: "+ -y); //6
        System.out.println("y4: "+ --y); //-7

        //Çokomelli:  y=-7 olarak kaldı!!
        System.out.println("y5: "+ - --y); //8 bir azaltıp pozitife çevirdi
        System.out.println("y6: "+ - ++y); //7
        
        System.out.println("y7: "+ y); //-7

        // ++k değiştirp anında işler. k++ işler sonra artırır.


        System.out.println("--------1---------");

        int m, n, p, q;
        
        m=4;
        n=2;
        p=10;
        q=8;
        
        m= -m++;
        n= n--;
        p= - --p;
        q= -++q;
        System.out.println("m="+m);
        System.out.println("n="+n);
        System.out.println("p="+p);
        System.out.println("q="+q);

        m= -m++;
        n= n--;
        p= - --p;
        q= -++q;
        System.out.println("--------2---------");
        System.out.println("m="+m);
        System.out.println("n="+n);
        System.out.println("p="+p);
        System.out.println("q="+q);

        System.out.println("--------3---------");
        m= -m++;
        n= n--;
        p= - --p;
        q= -++q;
        System.out.println("m="+m);
        System.out.println("n="+n);
        System.out.println("p="+p);
        System.out.println("q="+q);

        //Sistem her seferinde m ve n'nin ilk değerlerini alır
        //Bu nedenle asla eksilme veya artış yazdırılamaz.
        

        System.out.println("--------4---------");
        System.out.println("7%5: "+(7%5));
        System.out.println("7/5: "+(7/5));
        System.out.println("7*5: "+ (7*5));

        System.out.println("--------5---------");
       
        int a,b, c;
        a=5; b=6; c=9;
        double k, h;
        k=10; h=11;
        
        a +=b;
        System.out.println("a:" +a);
        a -= b;
        System.out.println("a: "+a);

        h%= k;
        System.out.println("h: "+h);
        h=11;
        h=h/k; //h/=k;
        System.out.println("h: "+h);
        

    }
    
}