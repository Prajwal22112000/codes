#include <iostream>
using namespace std;
int main(){
    int number, i, sum = 1;
    cout<<"enter the number"<<endl;
    cin>>number;
    i = number;
    while (i > 0)
    {
        sum = sum*i;
        i--;
    }
    cout<<"factorial of "<<number<<" is "<<sum<<endl;
    return 0;
}