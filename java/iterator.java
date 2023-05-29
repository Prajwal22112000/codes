import java.util.*;
public class iterator {
    public static void main(String[] args) {
        HashSet <String> hm = new HashSet<String>();
        hm.add("Prjawal");
        hm.add("Negi");
        hm.add("Airplane");
        hm.add("Prjawal 2");
        Iterator itr = hm.iterator();
        System.out.println(itr.hasNext());
        System.out.println(itr.next());
        System.out.println(itr.hasNext());
        System.out.println(itr.next());
        System.out.println(itr.hasNext());
        System.out.println(itr.next());
        System.out.println(itr.hasNext());
        System.out.println(itr.next());
        System.out.println(itr.hasNext());
        // System.out.println(itr.next());
    }
}
