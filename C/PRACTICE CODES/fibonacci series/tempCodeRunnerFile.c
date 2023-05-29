#include<stdlib.h>
#include<stdio.h>

int main(){

    int x, a, b, c, y;
    printf("enter a number and we will find upto that number number");
    scanf("%d", &x);
    b = 1;
    a = 0;
    c = 0;
    while(a < x){
        printf("%d\n ", a );
        c = a + b;
        a = b;
        b = c;
    }

return 0;
}
