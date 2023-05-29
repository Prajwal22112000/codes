#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c, b;

    printf("print any two numbers");
    scanf("%d", &a);
    scanf("%d", &b);
    c = 1;
    while(c%b != 0 || c%a != 0)
    {
        c++;
    }
    printf("LCM is:%d", c);
return 0;
}

