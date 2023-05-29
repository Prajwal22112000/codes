class B{
    int c;
    static int d;
    void display(){
        System.out.println(c);
        System.out.println(d);
    }
    public static void main(String[] args) {
        A a1 = new A(69, 420);
        a1.display();
        A b1 = new A(8, 6666);
        b1.display();
        A.showb(21);
        A.showb(12222);
        }
}