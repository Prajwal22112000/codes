import java.util.*;

public class hashmap {
  public static void main(String[] args) {
    HashMap <Integer, String> students = new HashMap<Integer, String>();
    students.put(1, "Prajwal Negi");
    students.put(2, "Prajwal Negi 2");
    students.put(3, "Prajwal Negi 3");
    students.put(4, "Prajwal Negi 4");
    students.put(5, "Prajwal Negi 5");
    // HashMap <Integer,String> Students2 = students.clone();
    System.out.println(students.keySet());
    System.out.println(students.values());
    System.out.println(students.entrySet());
    System.out.println(students.containsValue("Prajwal Negi 5"));
    System.out.println(students.containsValue("Prajwal Negi 6"));
    System.out.println(students.replace(2, "hahaha"));
    System.out.println(students.values());
    System.out.println(students.toString());
    System.out.println(students.values());
  }
}