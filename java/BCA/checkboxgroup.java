import java.awt.*;
public class checkboxgroup {
    public static void main (String a[]) {
        Frame f = new Frame("checkbox group example");
        f.setLayout(null);
        CheckboxGroup cbg = new CheckboxGroup();
        Checkbox c1 = new Checkbox("C++", cbg.true);
    }    
}