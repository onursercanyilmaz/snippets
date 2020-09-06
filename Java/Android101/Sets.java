package Android101;

import java.util.Set;
import java.util.TreeSet;

public class Sets {
    public static void main(String[] args)
    {
        //Set Interface
        /* 
    add (Object o) : Dizi içerisine bir eleman ekler.
    clear: Dizi içerisindeki bütün elemanları siler.
    contains (Object o): Bir eleman dizi içinde mi kontrol eder.
    remove (Object o): Bir elemanı siler.
    size: O ana kadar kaç eleman eklendiğini döndürür.

        */

        Set<String> treeSet = new TreeSet<String>();
        treeSet.add("Onur");
        treeSet.add("Sercan");
        treeSet.add("Yilmaz");
        treeSet.add("Onur"); //Yazdık ama ikinciye saklamaya izin vermez. 
        

        for(String str : treeSet)
        {
            System.out.println(str);
        }
    }
    
}
