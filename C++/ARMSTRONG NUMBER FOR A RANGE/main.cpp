#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int lower, higher, i, j, power, number, remainder, sum;
    cout<<"enter lower range"<<endl;
    cin>>lower;
    cout<<"enter upper range"<<endl;
    cin>>higher;
    for(i = lower; i <= higher; i++){
        number = i;
        power = 0;
        while(number > 0){
            power++;
            number = number/10;
        }

        number = i; //to reintialize because the value because number value after while loop is 0
        sum = 0;//intialize the sum by zero before executing while loop because we have to sum the number from zero for each iteration
        while(number > 0){
            remainder = number%10;
            sum = sum + pow(remainder, power) + 0.1;// cout<<"sum ="<< sum<< " remainder ="<< remainder<<endl;
            number = number/10;
        }// cout<<"i = "<<i<<" sum = "<<sum<<" ";
        if(i == sum){
            cout<<"the number is a armstrong"<<endl;
        }else{
            cout<<"the number is not an armstrong"<<endl;
        }
        cout<<"\n";
    }
}