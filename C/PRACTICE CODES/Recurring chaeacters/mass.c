#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int number_entered, a, b, x, y, z;
    printf("enter any digit of numebrs and we will tell you if its armstrong number or not\n");
    scanf("%d", &number_entered );
    printf("the numbver you entered is %d\n", number_entered);

    a = number_entered;
    b = number_entered;
    x = 0;
    z = 0;

    while (a != 0){
        a = a/10;
        x++;
    }
    y = 0;
    a = 0;
    while (b != 0){
        y = b%10;
        z =  z + pow(y, x) + .00000001;
        b = b/10;
    }
    if ( z == number_entered){
        printf("the  number you entered is an armstrong number");
    }else{
        printf("it is not an armstrong number");
    }
}
