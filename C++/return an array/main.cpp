#include <iostream>
using namespace std;
int * fun(int a[10]){
    int *p;
    for (int i = 0; i < 10; i++)
    {
        a[i] = i;
    }
    return a;
}
int main(){
    int a[10];
    int *x;
    x = fun(a);
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<endl;
    }
}