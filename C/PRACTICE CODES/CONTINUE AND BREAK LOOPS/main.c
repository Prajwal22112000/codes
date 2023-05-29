#include <stdlib.h>
#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("enter two variable and we will display all the prime numbers between them\n");
    printf("enter first variable: ");
    scanf("%d", &a);
    printf("enetr second variable: ");
    scanf("%d", &b);

    c = (a >= b), b; a ;
    printf("%d", c);

    while (c <= b)
    {
        if (b%a != 0){
            printf("%d\n", a);
        }
        a++;
    }
    return 0;
}
