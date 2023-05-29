#include <stdio.h>
#include <math.h>

int main()
{
float F;
float Celsius;
    printf("Type the the tempreture in F\n");
    scanf("%f", &F );
    Celsius = 5 * (( F - 32) /9);
    printf("the tempreture in Farenheit will be %.2f celcius",  Celsius );
return 0;
}
