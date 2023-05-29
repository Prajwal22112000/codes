import java.awt.*;
import java.awt.event.*;

class mouselistnerclass extends Frame implements MouseListener{
    TextField tf1;
    Button b1,b2,b3;
    mouselistnerclass(){
        tf1 = new TextField(20);
        tf1.setBounds(50,40,200,20);
        add(tf1);

        b1 = new Button("1");
        b1.setBounds(50,80,100,20);
        b1.addMouseListener(this);
        add(b1);
        
        b2 = new Button("2");
        b2.setBounds(160 ,80,100,20);
        b2.addMouseListener(this);
        add(b2);

        b3 = new Button("End");
        b3.setBounds(260,80,100,20);
        b3.addMouseListener(this);
        add(b2);

        //Frame properties 
        setLayout(null);
        setSize(500,500);
        setVisible(true);
    }
    public void mousePressed(MouseEvent me){}
    public void mouseReleased(MouseEvent me){}
    public void mouseEntered(MouseEvent me){}
    public void mouseExited(MouseEvent me){}
    public void mouseClicked(MouseEvent me){
        Button source = (Button)me.getSource();
        if(source == b1){
            tf1.setText("Button 1 is clicked");
        }
        if(source == b2){
            tf1.setText("Button 2 is clicked");
        }
        if(source == b3){
            this.dispose();
        }
    }
    public static void main(String args[]){
        mouselistnerclass f2 = new mouselistnerclass();
    }
}