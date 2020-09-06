package Android101;

import java.util.Scanner;

public class cokboyutludiziler_arrays {

    public static void main(String[] args)
    {
        //Kullanıcı girişli array oluşturma
        Scanner giris = new Scanner(System.in);
        int[][] satis = new int[3][2];
        int i,j;

        for (i = 0; i<3 ;i++)
        {
            for(j = 0; j<2;j++)
            {
                 System.out.print("Satis"+"["+i+"]"+"["+j+"] =");
                 satis[i][j] = giris.nextInt();
            }
    }

    System.out.println("Tablo: ");
    for(i=0; i<3; i++)
    {
        for(j=0;j<2;j++)
        {
            System.out.print(satis[i][j]+ " ");
        }
        System.out.println();
    }


    //System.out.print() // aynı satıra yazmaya devam eder
    //Syste.out.println() // yeni satıra geçer
        
    //HAzır array oluşturma
    int[][] myArray = new int[][]{
        {5,6,9},
        {9,10,6},
        {4,5,3}
        };
        System.out.println("Hazır Tablo: ");
        for(i=0; i<myArray.length; i++) //myArray.length ifadesi satır sayısını verir.
        {
            for(j=0;j<myArray[0].length;j++) //myArray[0].length ifadesi sütun sayısını verir.
            {
                System.out.print(myArray[i][j]+ " ");
            }
            System.out.println();
        }

        //Her satırın ayrı ayrı toplamı:
        int toplam;
        for(i =0; i<myArray.length;i++){
            toplam = 0;
            for(j=0;j<myArray[0].length;j++)
            {
                toplam+=myArray[i][j];
            }
            System.out.println(i+1+". satır toplamı: "+toplam);
        }

        System.out.println("------------------");
        //Her sütunun toplamı:
        for(i=0; i<myArray.length;i++)
        {
            toplam = 0;
            for(j=0;j<myArray[0].length;j++)
            {
                toplam+=myArray[j][i];
            }
            System.out.println(i+1+". sütun toplamı: "+ toplam);
        }

    

                               



    }
}
