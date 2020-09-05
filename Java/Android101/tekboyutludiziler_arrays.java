package Android101;

import java.util.Scanner;

public class tekboyutludiziler_arrays {

    public static void main(String[] args)
    {
        /* 
        
        Tip[] DiziAdı = new Tip [ElamanSayısı];
        ile
        Tip DiziAdı[] = new Tip [ElemanSayısı];
        Aynı şeydir.
        
        */

        int[] x = new int[6];
        Scanner input = new Scanner(System.in);
        int i,toplam=0;
        for(i = 0;i<5;i++){
            x[i] = input.nextInt();
            toplam += x[i];

        }
        System.out.println("Toplam: " +toplam);
        System.out.println("2.girilen sayı: " + x[1]);


        //Yeni örnek

        int[] yeniDizi ={1,2,5,8,9};
        int total=0;
        for(int j=0;j<yeniDizi.length;j++) 
        {
            total+=yeniDizi[j];

        }
         System.out.println(total);
    }
    
}