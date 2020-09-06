package Android101;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class dosya_islemleri2 {

    public static void main(String args[]) throws IOException
    {
        //BYTE için : OutputStream ve InputStream
        //METİN için : Writer ve Reader

        //Metin Yazma
        String dosyaAdi = "kriptopara.txt";
        FileWriter isimler = new FileWriter(dosyaAdi);

        isimler.write("BTC\n");
        isimler.write("XRP\n");
        isimler.write("ETH\n");
        isimler.close();

        //Metin Okuma
        String satir;
        try
        {
            BufferedReader oku = new BufferedReader(new FileReader(dosyaAdi));
            satir = oku.readLine();
            while(satir != null)
            {
                System.out.println(satir);
                satir = oku.readLine();


            }
            oku.close();
        }
        catch(IOException iox)
        {
            System.out.println("Dosya okunamıyor.");
        }


      



    }
}
