#include <iostream>
using namespace std;
template <class int>
class A{
protected:
    int a, b, c;
public:
    A{
        a = b = c = 0;
    }
    A(t x, int y, int z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<endl;
    }
};
// template <class int>
class B: public class A{
public:
    int d ;
    B(t f,t x, int y, int z){
        d = f;
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<d<endl;
    }
};
// template <class int>
class C: public class A{
public:
    int f;
    B(int d, int x, int y, int z){
        f = d;
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<f<<endl;
    }
};
int main(){
    A <int> c();
    c.display();
    // B <float> b(1, 2, 3, 4);

}