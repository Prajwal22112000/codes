import java.util.*;
class hashset{
    public static void main(String[] args) {
        HashSet <String> obj = new HashSet<String>();
        obj.add("prajwal");
        obj.add("girl 1");
        obj.add("boy 1");
        obj.add("girl 2");
        obj.add("boy 2");
        int i = obj.hashCode();
        obj.remove("prajwal");
        System.out.println(obj);
        System.out.println(i);
        System.out.println(obj.contains("girl 1"));
    }
}