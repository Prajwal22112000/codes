
#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    char x;
    start:

    printf("enter a year and we will tell you if its leap or not");
    scanf("%d", &year);

    if(isdigit(year)){
        if(year%4 == 0){
            printf("%d is a leap year", year);
        }else{
            printf("%d is not leap year", year);
        }
    }else{
        printf("enter a valid number");
    }
    printf("do you want to try again ???(y/n)");
    scanf("%c", x);
    if (x == 'y'){
        goto start;
    }else{
    }
}
