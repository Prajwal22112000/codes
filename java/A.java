class B {
    void display(){
        System.out.println("Class B display method called");
    }
}

interface C {
    public void Cfunction();
}

interface D {
    public void Dfunction();
}
abstract class E{
    void display(){
        System.out.println("abstract own default method called");
    }
    public abstract void Cotherfunction();
}

class A extends E implements C, D {
    int a = 10;
    static int b = 111;
    public void Cfunction() {System.out.println("hello C");};
    public void Dfunction() {System.out.println("hello D");};
     void display(){
        System.out.println("Class A display method called");
    }
    public static void main(String[] args) {
        A Aobj = new A();
        Aobj.Cfunction();
        Aobj.Dfunction();
        Aobj.display();
    }
}