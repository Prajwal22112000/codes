import java.io.*;
public class bytestreamdemo {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("C:/Users/ASUS/Documents/codes/java/BCA/text files/file1.txt");
            FileOutputStream fos = new FileOutputStream ("C:/Users/ASUS/Documents/codes/java/BCA/text files/file2.txt");
            int data;
            while((data=fis.read()) !=-1){
                System.out.print((char)data);
                fos.write(data);
            }            
            fis.close();
            fos.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
