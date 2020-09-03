package Android101;

import java.util.Scanner;

public class switch_case {

    public static void main(String args[]){

        System.out.println("Kütüphaneye Hoş Geldiniz! \n Lütfen Seçim Yapınız:\n1- Kitap al\n2- Kitap bırak\n3- Bağış Yap");

        int secim;
        Scanner input = new Scanner (System.in);
        secim = input.nextInt();

        switch(secim){
            case 1:
                System.out.println("Kitap ödünç verildi.");
                break;

            case 2:
                System.out.println("Kitap iade alındı.");
                break;
            case 3:
                System.out.println("Bağış yapıldı");
                break;

            default:
                System.out.println("Lütfen geçerli bir sayı giriniz!\n");
                break;
        }


    }
    
}