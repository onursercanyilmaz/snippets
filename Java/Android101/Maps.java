package Android101;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class Maps {
    public static void main(String args[])
    {
        //Map Interface
        //Anahtar - Değer

        /* 
    clear: Map içinde bulunan bütün değerleri siler.
    containsKey (Object key): Belli bir anahtar daha önceden girilmiş mi sorgular.
    containsValue (Object value): Belli bir obje daha önceden girilmiş mi sorgular.
    get (Object key): Anahtara karşılık gelen objeyi döndürür.
    put (Object key, Object value): Anahtar - değer ikilisini kayıt eder.
    remove (Object key): Belli bir anahtara karşılık gelen değeri siler.
    size: O zaman kadar kayıt edilmiş anahtar - değer ikili sayısını verir.

        */

        Map<String,String> userMap = new HashMap<String, String>();
        userMap.put("email", "onur@example.com");
        userMap.put("name", "Onur Sercan");
        userMap.put("adress", "Istanbul");
        userMap.put("emails", "sercan@example.com");
        userMap.put("email", "onur@example.com");
        //Aşağıdan yukarı yazdırıyor. Aynı key olunca ikinciyi yazmıyor.
        

        System.out.println("Kullanıcı maili: "+userMap.get("email"));

        for(Map.Entry<String,String> pairs : userMap.entrySet())
        {
            System.out.println(pairs);
        }

        
        ArrayList<String> list = new ArrayList<String>();
list.add("Ahmet");
list.add("Ozan");
list.add("Eda");
list.add("Ahu");

for (int i = 0; i < list.size(); i++) {
    list.remove(i);
}

for (String str : list) {
    System.out.println(str);
}

int[] array1 = new int[10];
int[] array2 = {1,2,3,4};

System.out.println(array1.length * array2[2]);


int[] int_array = new int[31];



System.out.println(int_array[5]);
    }


}
