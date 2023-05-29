import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.nextLine();
        String ar[] = (str.split("[?!_@.,]")).toString().split("[?!_@.,]");
        for(String ch: ar){
            if(ch .equals(" ")|| ch .equals("?")|| ch .equals(",") || ch .equals("!") || ch .equals("_") || ch .equals(".") || ch .equals("@")  || ch .equals("'")){
                System.out.println();
            }
            else{
                System.out.print(ch);
            }
        }

        scn.close();
    }
}