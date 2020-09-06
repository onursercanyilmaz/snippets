package Android101;


import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class Thread_Kontolu_Executor {
    
    public static void main(String[] args) throws InterruptedException
    {
        //Aynı anda kaç thread çalıştırmalı sorusuna yanıt newFixedThreadPool ile 5 thread dedik.
        ExecutorService executor = Executors.newFixedThreadPool(5);
        for(int i = 0; i<20;i++) //20 Thread tanımladı
        {
            Thread thread = new Thread(new MyThread("thread "+i,3 ));
            executor.execute(thread); //20 threadi aynı anda en fazla 5 thread çalışacak şekilde düzenledi.
            //İlk 5 threadin işi bitikten sonra diğer 5 threade geçer.
        }
        executor.shutdown();
        executor.awaitTermination(10, TimeUnit.SECONDS);
        System.out.println("DONE");


        System.out.println("-----------Scheduled Executor ---------- ");

        ScheduledExecutorService pool = Executors.newScheduledThreadPool(5); //İşlemin ileri bir zaman diliminde gerçekleşmesi
        //ScheduledExecutorService sayesinde gerçekleşir.
        MyThread worker = new MyThread("Thread 1", 6);
        pool.schedule(worker, 5, TimeUnit.SECONDS); //Schedule metodu ile program başlatıldıktan 5 saniye sonra Threadler çalışır
        Thread.sleep(20000);
        pool.shutdown();
    }
}
