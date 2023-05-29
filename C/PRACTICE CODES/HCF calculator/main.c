#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("enter and two numbers and we will find its HCF\n");
    scanf("%d", &a);
    scanf("%d", &b);

    c = (a>= b)? b : a;

    while(a%c != 0 || b%c != 0){
        c--;
    }
    printf("HCF : %d", c);

return 0;
}
