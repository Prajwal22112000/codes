#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    float average;

    printf("type any five numbers below and we will tell you the averge of those numbers \n");
    scanf(" %d", &a);
    scanf(" %d", &b);
    scanf(" %d", &c);
    scanf(" %d", &d);
    scanf(" %d", &e);

    average = (a + b + c + d + e)/5.0;

    printf("Average : %f \n", average);

    return 0;
}
