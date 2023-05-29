#include <stdio.h>
#include <stdlib.h>

int main()
{
   //using the do while functoion//

   float totalscore, number, subjects, marks, average;

   subjects = 0;
   totalscore = 0;
   average = 0;
   number = 1;
   marks = 0;


   do{
    printf("so your average would be : %.2f percent in %.0f subject(s) \n", average, subjects);
    printf(" type your marks in %.0f subject :  \n", number);
    scanf(" %f", &marks );

    subjects ++;
    number ++;
    totalscore += marks;
    average = totalscore / subjects;


    printf(" totalscore: %.2f and marks: %.2f \n", totalscore, marks, average);

   }while (marks <= 100 && marks <= 100 && subjects <=6 );

   printf("so your total marks in all six subjects will be: %.2f \n with an average of %.2f ",totalscore, average);
    return 0;
}
