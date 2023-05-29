#include <iostream>
#include <strings.h>

using namespace std;

int main(){
    int a, b, quotient , remainder;
    cout<<"enter the divdend: ";
    cin>>a;
    cout<<"enter the divisor: ";
    cin>>b;
    quotient = a / b;
    remainder = a % b;
    cout<<"quotient is: "<<quotient<<endl;
    cout<<"remiander is: "<<remainder<<endl;
}