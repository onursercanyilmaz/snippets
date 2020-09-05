package Android101;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.GregorianCalendar;
public class tarih_islemleri {

    public static void main(String[] args) throws ParseException
    {
        Date nowTime = new Date();
        System.out.println(nowTime.toString());

        System.out.println("Timestamp: "+nowTime.getTime());//1970 1 Ocak 00.00'dan itibaren geçen zamanın milisaniye cinsi.

        DateFormat df = new SimpleDateFormat("dd/MM/yyyy");
        System.out.println(df.format(nowTime));//Daha okunabilir bir tarih

        Date tarih = df.parse("11/11/2000");
        System.out.println(tarih);

        //Java Calender sınıfı
        GregorianCalendar takvim = new GregorianCalendar(1616, 01, 02);
        Date tarih2 = takvim.getTime();
        System.out.println(tarih2.toString());

    }
    
}