#include<iostream>
using namespace std;
class Demo{
private:
    int name, value;
public:
    int val;
    int getValue() const {
        int x = 6;      //won't generate any error
        x = val;    //won't generate any error
        // val = x;    //generates error
        return val;
    }
    Demo(int name, int value){
        this->name = name;
        this->value = value;
    }
    int showValues(){
        cout<<name<<" "<<value;
    }
};
int main() {
    Demo d = Demo(22, 333);
    d.val = 10;
    cout << "The value using object d : " << d.getValue()<<"\n";
    d.showValues();
    return 0;
}
