#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, a;
    float average;

    printf("type 0 zero if you want to exit");
    int y = 1 ;
    do{
        printf("enter a number");
        scanf("%d", &a);
        x = x + a;
        average = (float)x/(float)y;
        printf("average: %.2f\n", average);
        printf(" x: %d\t y = %d\n", x, y);
        y++;
    }while(a!=0);
    
    return 0;
}
