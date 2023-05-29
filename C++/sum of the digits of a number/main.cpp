#include <iostream>
using namespace std;
int main(){
    unsigned long long int num, cpy;
    int rem, sum = 0;
    cout<<"enter the number to find the sum of it's digits"<<endl;
    cin>>num;
    cpy = num;
    while (num != 0)
    {
        rem = num%10;
        sum += rem;
        num = num/10;
    }
    cout<<"the sum of all the digits of "<<  cpy <<" is "<<sum<<endl;
}