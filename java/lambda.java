import java.util.ArrayList;
import java.util.function.Consumer;

public class lambda {
    public static void main(String[] args) {
        ArrayList <Object> al = new ArrayList<Object>();
        al.add("negi");
        al.add("negi2");
        al.add("neg3");
        al.add("negi4");
        System.out.println("print the arraylist using inline lambda function");
        al.forEach((n) -> {System.out.println(n);});
        System.out.println("print the arraylist using method");
        Consumer method = (n) -> {System.out.println(n);};
        al.forEach(method);
    }
}
