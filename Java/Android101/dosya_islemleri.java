package Android101;

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class dosya_islemleri {

    public static void main(String args[]) throws IOException
    {
        //DOSYA YAZMA
        

        String str = "Dosya  yazma işlemi...";
        
        File file = new File("dosya.txt");
        if(!file .exists()) //dosya.txt yoksa oluştur.
        {
            file.createNewFile();
        }
        FileWriter fileWriter = new FileWriter(file,false); //buradaki false dosyaya append modunda yazmayı sağlar
        //appned modu dosyanın öncenki metinlerine dokunmadan veya değiştirmeden yazmaktır.
        //Yani append modu false olduğundan her seferinde dosya.txt içindekini siler ve yeniden yazar.
        BufferedWriter bWriter = new BufferedWriter(fileWriter);
        //BufferedWriter sınıfı ayarlanabilir tampon bellek sağlar(Buffer).
        //BufferWriter olmadan yazma işlemi yapılması halinde karakterler anında byte'a çevrilerek
        //yazım gerçekleştirilir ve bu programı verimsiz hale getirir.
        bWriter.write(str); //write metodu yazma işlemini başlatır.
        bWriter.close();


         //DOSYA OKUMA
         System.out.println("Dosya Okuma İşlemi: ");

         FileReader fileReader = new FileReader(file); //file burada dosya.txt yi temsil eder.
         String line; 
         BufferedReader br = new BufferedReader(fileReader);
//BufferedReader kullanılmaması halinde dosyadan byte çekilir ve karaktere dönüştürme işlemi yapılır. Bu da programın verimini düşürür.
         while((line = br.readLine()) != null) //Her satırı oku
         {
             System.out.println(line); //her satırı yaz
         }
         br.close();


         //Binary Dosya Oluşturma Veri Kaydetme
         //İnternetten veri çekmek için binary dosya kullanılmalı.

         byte[] data = {0x01, 0x02}; //hexadecimal kodları ile  1 ve 2... 
         File binaryFile = new File("binary.dat");
         FileOutputStream fos = new FileOutputStream(binaryFile); 
         //FileOutputStream bir binary dosyaya byte tipinde veri yazmak için kullanılır. 
         BufferedOutputStream bos = new BufferedOutputStream(fos);

         bos.write(data);
         bos.close();

         //Binary Dosyayı Okuma
         data = new byte[(int) binaryFile.length()]; //dosya içeriğini alabilecek bir byte dizisi oluşturuldu.
         FileInputStream fis = new FileInputStream(binaryFile); //FileInput Stream ile dosya erişimi sağlandı.
         BufferedInputStream bis = new BufferedInputStream(fis);
         bis.read(data,0,data.length);
         bis.close();

    }
}
