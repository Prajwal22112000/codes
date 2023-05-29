//print the following pattern somthing like this 
/*555555555
  544444445
  543333345
  543222345
  543212345*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

int n;
printf("enter a number");
scanf("%d", &n);
// Complete the code to print the pattern.
int i , j, k,a , b, c;
b = 0;
//code for the upper part of the code decreasing order
    for (i = n; i > 1; i--) {
        c = b;
        a = n;
        for (j = 1; j < n ; j++) {
            if (b <=0 ) {
                printf("%d ", a);
            }else if(b > 0){
                printf("%d ", a);
                a--;
                b--;
            }
        }
        b = a;
        for (j = 0; j < n; j++) {
            if (b > 1) {
                printf("%d ", a);
                b--;
            }else if(b == 1){
                printf("%d ", a);
                a++;
            }
        }
        b = c;
        b= b +1;
        printf("\n");
    }
//code fot the below portion of the code wher increment will occur
b = 1;
    for (i = n; i >= 1; i--) {
        c = b;
        a = n;
        for (j = 0; j < n ; j++) {
            if (j == n-1) {
                continue;
            }
            if (a > b) {
                printf("%d ", a);
                a--;
            }else if(a == b){
                printf("%d ", a);
            }
        }
       // printf("\t\ta = %d b = %d\n", a, b);
        a = 1;
        for (j = 0; j < n; j++) {
            if (a <= b){
                printf("%d ", b);
                a++;
                
            }
            else if(a > b){
                printf("%d ", a);
                a++;
            }
        }
        b = c;
        b= b +1;
        printf("\n");
    }
    return 0;
}
