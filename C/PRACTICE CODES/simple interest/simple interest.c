#include <stdio.h>
#include <stdlib.h>

int main()
{

    float SI, time, principal, rate;

    printf("enter the principal amount of the money in rupees \n");
    scanf(" %f", &principal);

    printf("enter the rate in decimal form\n");
    scanf(" %f", &rate);

    printf("enter the time (in years) \n");
    scanf(" %f", &time);

    SI = (time * principal * rate)/100.00;

    printf("SI : %.2f", SI);
    
return 0;
}
