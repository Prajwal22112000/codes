import java.util.Calendar;
import java.util.Scanner;

class findtheday{
    public static void main(){
        Calendar c = Calendar.getInstance();
        Scanner scn = new Scanner(System.in);
        int year, month, date;
        date = scn.nextInt();
        month = scn.nextInt();
        year = scn.nextInt();
        c.set(year, month, date);
        System.out.println(c.getFirstDayOfWeek());
        
    }
}
