package Android101;



public class while_loop {

    public static void main(String args[])
    {
        int sayac = 10;
        while(sayac >= 1)
        {
            System.out.println(sayac);
            sayac--;
        }
        System.out.println("-------Faktoriyel--------");
        int fact = 1;
        int i=1;
        while(i <= 10){
            fact*=i;
            System.out.println(i+"! = "+fact);
            i++;

        }

        System.out.println("-------do-while--------");

        int j = 1;
        do{
            System.out.println(j);
            j++;
        }while(j < 0); //çıktı 1 olur. En az 1 kere çalışır.
    }

    
    
}