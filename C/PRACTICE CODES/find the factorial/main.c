#include<stdio.h>
#include<stdlib.h>
int fun(int a);
int main(){
    int x, a;
    printf("enter a number and we will find you its factorial");
    scanf("%d", &x);
    a = fun(x);
    printf("%d", a);
}
int fun(int a){
    int sum=1, i;
    for (i = 1; i <= a; i++)
    {
        sum = sum * i;
    }
    return sum;
}

