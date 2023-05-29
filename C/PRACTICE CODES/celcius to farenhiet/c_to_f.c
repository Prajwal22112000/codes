#include <stdio.h>
#include <math.h>

int main()
{
float F;
float C;
    printf("Type the the tempreture in F\n");
    scanf(" %f", &F );
    C = 5 * ( F - 32) /9;
    printf("the tempreture in Farenheit will be %.2f celcius",  C );
}