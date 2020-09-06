
package Android101;


public class myExceptionClass extends Exception {
    private static final long serialVersionUID = 1L;

    @Override
    public String getMessage() {
        return "Benim hatam olustu.";
    }
}
