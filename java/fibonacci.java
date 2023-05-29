
import java.util.Scanner;

class fibonacci{
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int a = 0, b = 1, c;
        System.out.println("enter the number of terms to be printed");
        int range = s1.nextInt();
        for(int i = 1; i <= range; i ++){
            System.out.println(a);
            c = a + b;
            a = b;
            b = c;
        }
        s1.close();
    }
}