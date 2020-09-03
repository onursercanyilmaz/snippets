package Android101;

public class DegiskenTipleri {
    
    public static void main(String args[])

    {
        System.out.println('b'-17/2); //90
        //b'nin ASCII kodu 98 olduğundan

        int a,b,c;
        a=100;
        b=56;
        c=12;
        System.out.println("Int: "+(a+b+c)); //168
        System.out.println("Int: "+a+b+c); //1005612

        float d = 45;
        float e = 90;
        System.out.println("Float: "+d/e); //0.5

        float PI_float = (float) Math.PI; //PI double olduğundan floata çevirmeliyiz.
        System.out.println("Float: "+PI_float);

        double PI_double = Math.PI;
        System.out.println("Double: "+PI_double);

        String yazi = "Merhaba";
        System.out.println(yazi);
    }
}