#include <iostream>

using namespace std;

int main(){
    int a, b, temp;
    cout<<"enter two numbers\n";
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"swapped value of a is now: "<<a<<endl;
    cout<<"swapper value of b is now: "<<b<<endl;
    
}