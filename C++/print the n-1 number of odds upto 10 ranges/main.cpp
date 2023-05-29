#include <iostream>
using namespace std;
int main(){
    int count = 0, i, j, n;
    cout<<"enter the number you want to print in the following code "<<endl;
    cin>>n;
    for(i = n; i < n*10 - 1; i++){
        cout<<n<<" ";
        if(i == n){
            cout<<"\n";
            i = 1;
            n = n + 2;
            count++;
        }
        if(count == 10){
            break;
        }
    }
}