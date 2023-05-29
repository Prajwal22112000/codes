#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float grade1, grade2, grade3, average;

    printf("wirte your highest grades in any three subjects \n");
    scanf(" %f", &grade1);
    scanf(" %f", &grade2);
    scanf(" %f", &grade3);
    
    average = (grade1 + grade2 + grade3)/ 3;

    if (average > 90){
        printf("grade: A\t your score: %.2f", average);
    }else if(average > 80){
        printf(" grade: B\t your score: %.2f", average);
    }else if(average > 70){
        printf("grade: C\t your score: %.2f", average);
    }else if(average > 60){
        printf("grade: d\t your score: %.2f", average);
    }else
    printf("your are stupid becase your total is %f, which is less than 60", average);
    
    return 0;
}
