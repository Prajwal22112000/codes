#include <stdio.h>
int main(){
    //make a program to print the fibonacci series
    int a, b, c, d;
    b = 0, c = 0, a = 1;
    while(a < 1000 ){
        printf("%d\n", b*a/c);
        c = a + b;
        b = a;
        a = c;
    }
}