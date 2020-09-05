package Android101;

public class string_metodlari {
    public static void main(String[] args)
    {
//String[] args dikkat normalde String args[]
    String name = "onur sercan";
    System.out.println("Uzunluk: "+ name.length()); //4

    System.out.println(name.substring(3, name.length())); //r sercan
    System.out.println(name.substring(0, 7));//onur se

    System.out.println("Sercan başlangıç indexi: "+name.indexOf("sercan"));

    //indexOf ile metin içerisinde karakter arama
    String mail = "onursercanyilmaz.gmail.com";
    if(mail.indexOf("@")==-1) //@ yoksa -1 döndürdüğünden
    {
        System.out.println("Maili yanlış girdiniz!");
    }else{
        System.out.println("Mail doğru girildi!");
    }

    //Metin Karşılaştırma
    String title = "Merhaba Java";
    if(title.equalsIgnoreCase("merhaba java"))
    {//equalsIgnoreCase küçük büyük harf duyarlılığına bakmaksızın
        //metni karşılaştırır.
        System.out.println("Başlık eşleşti.");
    }

    //Metni tamamen küçük harfe çevirme
    System.out.println("Küçük harf: "+ title.toLowerCase());

       //Metni tamamen büyük harfe çevirme
       System.out.println("Büyük harf: "+ title.toUpperCase());

       //Trim metodu ile sağdan ve soldan boşlukları atma,silme
       //Veritabanına kaydederken çok önemli
       String text_one = "      Lorem Ipsum  " ;
       System.out.println("Boşluklu : "+text_one);
       System.out.println("Boşluksuz: "+text_one.trim());


       //Split metodu Stringi böler ve string array oluşturur.
       String text_new = text_one.trim();
       String[] words = text_new.split(" ");
       System.out.println(words[0]); //Lorem
       System.out.println(words[1]); //Ipsum

       //Stringi byte dizisine çevirmek.
       //İnternette aktarım vs için gerekli olabilir.
       byte[] stringtoByte =text_new.getBytes();
       System.out.println(new String(stringtoByte)); //Lorem Ipsum
       System.out.println("Tip: "+ stringtoByte.getClass());//Class [B

       String bytetoString = new String(stringtoByte); 
       System.out.println("Byte To String: "+ bytetoString);//Lorem Ipsum
       System.out.println("Tip: "+bytetoString.getClass());// class java.lang.String
       

     
       //String array, kelimelerin başlangıçları
       String st1[] ={"ankara", "istanbul", "izmir", "adana"};
       int w;
      


       for(w=0;w<st1.length;w++)
       {
           if(st1[w].startsWith("an"))
           {
               System.out.println("\n"+st1[w]+" an ile başlıyor.");
           }
       }
       for(w=0; w<st1.length;w++)
       {
           if(st1[w].endsWith("a")){
               System.out.println("\n"+st1[w]+" a ile bitiyor.");

           }
       }

         //Stringin harflerini tek tek yazdırma
         String isim = "OnurSercan";
         int i;
  
         for(i=0; i<=isim.length()-1;i++)
         {
              System.out.println("\n"+isim.charAt(i));
         }
  
    }
    
}