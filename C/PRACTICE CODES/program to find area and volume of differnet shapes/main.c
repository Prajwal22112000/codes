#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[10], y[30] = "ve", c;

    scan_x:
    printf(" type a number 'v' to continue \n");
    scanf(" %s", x);
    printf(" %s \n", x);


    if(y == x){
        printf(" %s", x);
        goto another_quastion;
    }else{
        goto scan_x;
        printf(" %s", x);
    }

    another_quastion:


    printf("so you have chosen this ok");






    return 0;
}
