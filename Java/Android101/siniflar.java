package Android101;

import java.util.Scanner;

public class siniflar {
    
    public static void main(String args[]){

        System.out.print("Lütfen yarıçap değeri girin: ");
        Daire d = new Daire(); //Classtan Nesne oluşturma
        Scanner input = new Scanner (System.in);
        double r = input.nextDouble();
        
        //double cevre = d.cevre(2);
        //double alan = d.alan(2);
        System.out.println("Alan: "+d.alan(r));
        System.out.println("Cevre: "+d.cevre(r));

    }

    
}

class yeniClass{
    //Özellikller
    //Metodlar
}

class Daire{ //Class oluşturma
    public double yariCap; //Özellik
    
    public double alan(double yariCap) //Metodlar
    {
        return Math.PI * yariCap*yariCap;
    }

    public double cevre(double yariCap) 
    {
        return 2* Math.PI*yariCap;
    }
}
