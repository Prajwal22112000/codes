#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, x;
    printf("type any two nu,bers and we will give you thir Lcm\n");
    scanf("%d", &a);
    scanf("%d", &b);

    x = 1;
    while(x%a ==0 && x%b == 0);
    {
        x++;

    }


    printf("%d", x);

return 0;
}
