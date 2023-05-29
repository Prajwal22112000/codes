#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age, m, f, characters;
    char gender ;

    printf("type your age below \n");
    scanf(" %d", &age);
    printf("now type your gender (m/f)\n");
    scanf(" %c", &gender);


    if((age >= 18) && (gender == 'm' )){
        printf("you may enter\n");

    }else if(gender == 'f'){
        printf("go get a dick first you filthy women \n");

    }else if(age < 18 && gender == 'm'){
        printf("Sorry dude I can't let you enter cuz you are underaged\n188");
    }

    else {
        printf("sorry dude we don't recognize this type of gender \n\n");
    }

    if (gender = 'f'){
        printf("okay kidding dude we will allow you to enter if you can tell us how many characters are there in naruto series\n");
        scanf(" %i", &characters);
    }
    if (characters > 100){
        printf("okay you are correct you can enter now\n");
    }else{
    printf("wrong bitch get outta here you bitch\n");
    }
    
    return 0;
}
