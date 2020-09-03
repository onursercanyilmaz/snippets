package Android101;

import java.util.Scanner;



public class for_loop {

    public static void main(String args[])
    {
        //n'e kadar olan sayıların toplamı
        int n, toplam=0;
        System.out.println("Lütfen sayı giriniz.");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        for(int i=1;i<=n;i++)
        {
            toplam+=i;
        }
        System.out.println("Toplam: "+toplam);
        System.out.println("-----For_Faktoriyel-----");

        int fact=1;
        Scanner userinput = new Scanner(System.in);
        int k = userinput.nextInt();
        for(int i=1;i<=k;i++)
        {
            fact*=i;
        }
        System.out.println("Faktoriyel: "+fact);

        System.out.println("-----For_Alterne-Seri-----");
        
        int isaret, sayac;
        double x,seri;
        seri = 0;
        isaret = 1;
        x=1;
        for(sayac=1;sayac<=4;sayac++)
        {
            seri = seri+((x*(x+1))/((x+2)*(x+3))*isaret);
            x +=4;
            isaret=-isaret;
        }
        System.out.println("Seri: "+seri);

    }

    
    
}