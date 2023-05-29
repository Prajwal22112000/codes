#include<stdlib.h>
#include<stdio.h>


int main(){
    int x, a, b, c, y;
    printf("enter a number and we will find upto that number number");
    scanf("%d", &x);
    a = 0, b = 0, c = 1;

    while(a < x){
        printf("%d\n", a);
        b = a + c;
        a = c;
        c = b; 
    }
return 0;
}
