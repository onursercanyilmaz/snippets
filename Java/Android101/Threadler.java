package Android101;
public class Threadler {
    // Programda eş zamanlı işlem gerçekleştirme
    //Thread

    public static void main(String args[])
    {
        //Oyun oynanırken reklam göstermek threead örneğidir.
        //MyThread sınıfı ayrı bir java classı olarak yazıldı ve oradan çekiliyor.
        
        /*
        
        Thread th1 = new Thread(new MyThread("th1", 6));
        Thread th2 = new Thread(new MyThread("th2", 5));
        th1.start();
        th2.start();

        */

        //Aynı anda artan sayılar çıktı olarak verilir.


        //SetPriority
        //Threadler arasında öncelik belirleme
        Thread thread1 = new Thread(new MyThread("thread1", 5));
        Thread thread2 = new Thread(new MyThread("thread2", 5));
        Thread thread3 = new Thread(new MyThread("thread3", 5));
        
        thread3.setPriority(Thread.MAX_PRIORITY); //Öncelikle çalışacak olan ve işlemini ilk bitirecek olan.
        thread1.setPriority(Thread.MIN_PRIORITY);
        thread2.setPriority(Thread.MIN_PRIORITY);
        
        thread1.start();
        thread2.start();
        thread3.start();


       

    }
}


