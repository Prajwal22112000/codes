#include <iostream>
using namespace std;
int main(){
    int a, b, n, sum, add, sub, div;
    cout<<"what do you want to perform\n1.add\n2.sub\n3.div\n4.multiply"<<endl;
    cin>>n;
    cout<<"enter first digit"<<endl;
    cin>>a;
    cout<<"enter second digit"<<endl;
    cin>>b;
    switch (n)
    {
    case 1:
        cout<<a + b<<endl;
        break;
    case 2:
        cout<<a - b<<endl;
        break;
    case 3:
        cout<<a / b<<endl;
        break;
    case 4:
        cout<<a * b<<endl;
        break;
    
    default:
        cout<<"wrong input"<<endl;
        break;
    }
    return 0;
}