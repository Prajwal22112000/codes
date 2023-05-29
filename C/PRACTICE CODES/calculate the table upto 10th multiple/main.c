#include <stdio.h>

int main(){

int c, n, x;

printf("enter any nuber between \n");
scanf(" %d", &c);

printf("the the table of %d will contain these numbers upto 10th multiple \n", c);
n =1;
while (n <= 10){

    x = (c*n);

    printf(" %d \n", x);
    n = n + 1;
    }
return 0;
}
