import java.util.regex.*;
public class regexclass {
    public static void main(String[] args) {
        Pattern pattern = java.util.regex.Pattern.compile("", Pattern.CASE_INSENSITIVE);
        Matcher matcher = pattern.matcher("Prajwal Negi is great person");
        if(matcher.find()){
            System.out.println("Match found" );
        }
        else{
            System.out.println("Match is not foudn");
        }
    }
}