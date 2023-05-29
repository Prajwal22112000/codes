import javax.swing.*;
class FRAMELIST extends JFrame{
    public static void main(String[] args) {
        String a[] = {
            "monday",
            "tuesday",
            "wednesday",
            "thrusday"
        };
        JFrame  frame = new JFrame();
        frame.setLayout(null);
        JList jlist = new JList(a);
        jlist.setBounds(100,100,100,100);
        frame.add(jlist);
        frame.setSize(300,300);
        frame.setVisible(true);
    }
}