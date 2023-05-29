#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int age4, age5, age6;

    printf("define three ages???? \n");
    scanf(" %d \n" , &age4);
    scanf(" %d\n", &age5);
    scanf(" %d \n" , &age6);

    float averagae = (age4 + age5 + age6)/3;

    printf("average: %f \n", averagae);

    if(averagae > 4){
        printf("outstanding");
    }
    else if(averagae >3){
        printf("very  good");
    }
    else if (averagae >= 2){
        printf("good \n");
    }
    else{
        printf("vou are stupid \n");
    }
    return 0;
}
