import java.util.ArrayList;
import java.util.Collections;
import java.util.function.Consumer;
import java.util.HashMap;
public class arraylist {
    public static void main(String[] args) {
        ArrayList <String> al = new ArrayList<String>();
        al.add("prjwal");
        al.add("prjawal negi");
        al.add("rjawal hyoperx");
        al.set(1, "qrjawal onichan");
        al.remove("prajwal");
        al.forEach((n) -> {System.out.println(n);});
        HashMap <String, String> hm = new HashMap <String, String>();
        hm.add("negi", "prajwal");
        hm.add("negi", "prajwal");
        hm.add("negi", "prajwal");
        hm.forEach((n, m) -> {System.out.println(n, m);});
        Collections.sort(al);
        System.out.println(al);
    }
}


//      |	Find a match for any one of the patterns separated by | as in: cat|dog|fish
//      .	Find just one instance of any character
//      ^	Finds a match as the beginning of a string as in: ^Hello
//      $	Finds a match at the end of the string as in: World$
//      \d	Find a digit
//      \s	Find a whitespace character
//      \b	Find a match at the beginning of a word like this: \bWORD, or at the end of a word like this: WORD\b
//      \\uxxxx	Find the Unicode character specified by the hexadecimal number xxxx
//       n+	Matches any string that contains at least one n
//       n*	Matches any string that contains zero or more occurrences of n
//       n?	Matches any string that contains zero or one occurrences of n
//       n{x}	Matches any string that contains a sequence of X n's
//       n{x,y}	Matches any string that contains a sequence of X to Y n's
//       n{x,}	Matches any string that contains a sequence of at least X n's