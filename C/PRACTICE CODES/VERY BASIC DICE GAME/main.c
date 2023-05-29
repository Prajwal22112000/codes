#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(0));
    int x;
    char d;

    int dice1, dice2, dice3, dice4, dice5;

    printf("so we will show you three random numbers \n");


    dice4 = dice1 + dice2 + dice3;
    printf("the total value of dices will be %d", dice4);

    printf(" \n so guess what the next number gonna be ???\n");
    scanf(" %d", &d);

    dice5 = (rand()%6) + 1;

    if( d == dice5){
        printf(" well done dude \n");
    }else if( isalpha(d)){
        printf("what the fuck dude this is a dice not your fucking keyboard !!!\n");
    }else if(d > 6 || d < 0){
        printf("thats not even a number on dice lmao noobde\n");
    }else{
        printf(" you suck asshole \n");
    }

    printf("value you entered is %d \n", d);
    printf("value of dice is %d \n", dice5);

    return 0;
}
