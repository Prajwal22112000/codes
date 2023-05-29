#include <iostream>
using namespace std;

int main(){
    int a, sum = 0, n;
    cout<<"how many numbers do you want to sum"<<endl;
    cin>>n;
    cout<<"enter the numbers"<<endl;
    do {
        cin>>a;
        sum = sum + a;
        n--;
    }while(n!=0);
    cout<<"sum of numbers is "<<sum<<endl;
}