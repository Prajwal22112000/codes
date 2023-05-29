#include<stdio.h>
#include <math.h>

int main()
{
    long long number_entered, copy_number, a, remainder;
    long long i, b;

    number_entered = 0;
    i = b = remainder = 0;

    while(number_entered <= 100000)
    {
        i = 0;
        copy_number = number_entered;

        while (number_entered != 0){
            number_entered = number_entered/10;
            i = i + 1;
        }
        number_entered = copy_number;
        a = 0;
        remainder = 0;

        while(number_entered != 0){
            remainder = number_entered%10 ;
            a = a + pow(remainder, i) + 0.00000001;
            number_entered = number_entered/10;
        }

        if(copy_number == a){
            printf("%lld\n", a);
        }

        number_entered = copy_number;
        number_entered++;
    }
    return 0;
}
