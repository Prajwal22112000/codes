#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float CI, p, r;
    int t, n;

    printf("enter the principal Amount in rupees \n");
    scanf(" %f", &p);

    printf("enter the rate in percentage \n");
    scanf(" %f", &r);

    printf("enter the time in years \n");
    scanf(" %d", &t);

    printf("enter the number of times interest is sompounded per time period \n");
    scanf(" %d", &n);

    CI = p*(pow((1 + r/n), t * n ));
    printf("the compound interest will be: %.2f", CI);

    return 0;
}
