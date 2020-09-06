package Android101;

public class myExceptionCreated {

    public static void main(String args[])
    {
        try{

            hataBul(); //oluşturulan method yine daha önce kendi oluşturduğum hata
            //classını throw komutu ile çekti.
        }
        catch(myExceptionClass e){
            System.out.println(e.getMessage());

        }
    }

    public static void hataBul() throws myExceptionClass {
        throw new myExceptionClass();
    }

    
    
}
