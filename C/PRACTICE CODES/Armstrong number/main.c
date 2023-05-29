#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number_entered, copy_number, a;
    int i, remainder;
    printf("type any number bwtween 31 digits and we will tell you if its an armstrong number\n");
    scanf("%d", &number_entered);

    copy_number = number_entered;
    i = 0;
    a = 0;
    remainder = 0;

        while (number_entered != 0){
        number_entered = number_entered/10;
        i = i + 1;
    }
        number_entered = copy_number;

        while(number_entered != 0){
            
        remainder = number_entered%10;
        a = a + pow(remainder, i) + 0.1;
        number_entered = number_entered/10;
    }
        if(copy_number == a){
        printf("yeah this is an armstrong number");
        }else{
        printf("no this is not an armstrong number");
    }
    return 0;
}
