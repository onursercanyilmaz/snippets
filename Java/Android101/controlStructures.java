package Android101;

import java.io.IOException;
import java.util.Scanner;



public class controlStructures {

    public static void main(String args[])
    {

        //IF
        float price = 5;

        if(price==10){
            System.out.println("Price is 10");
        }else{
            System.out.println("Price is not 10");
        }

        System.out.println("------+7 age user entry------");

        Scanner user = new Scanner(System.in);
        int age;
      

        System.out.println("Please enter your age: ");
        age = user.nextInt();

        if(age < 7 )
        {
            System.out.println("You can not enter!");

        }else{
            System.out.println("You can enter.");
        }




        
        
    }
    
}