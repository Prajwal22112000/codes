import java.awt.*;
import java.applet.*;
public class menudemo extends Frame {
    menudemo(){
        MenuBar mb = new MenuBar();

        Menu filemenu = new Menu("File");
        MenuItem new1 = new MenuItem("New");
        MenuItem open1 = new MenuItem("Open");
        MenuItem save1 = new MenuItem("Save");
        MenuItem saveas1 = new MenuItem("Save As");
        MenuItem exit1 = new MenuItem("Exit");
        mb.add(filemenu);
        filemenu.add(new1);
        filemenu.add(open1);
        filemenu.add(save1);
        filemenu.add(saveas1);
        filemenu.add(exit1);

        Menu editmenu = new Menu("Edit");
        MenuItem cut1 = new MenuItem("Cut");
        MenuItem copy1 = new MenuItem("Copy");
        MenuItem paste1 = new MenuItem("Paste");
        mb.add(editmenu);
        editmenu.add(cut1);
        editmenu.add(copy1);
        editmenu.add(paste1);
        
        Menu helpmenu = new Menu("Help");
        MenuItem index1 = new MenuItem("Index");
        mb.add(helpmenu);
        helpmenu.add(index1);

        this.setMenuBar(mb);
        setLayout(null);
        setSize(400,400);
        setVisible(true);
    }
    public static void main(String args[]){
        menudemo obj = new menudemo();
    }
}
