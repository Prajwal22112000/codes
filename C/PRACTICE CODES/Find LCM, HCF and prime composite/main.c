#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, r;

    printf(" TYPE ANY TWO NUMBERS AND WE WILL TELL UYOU THEIR HCF, LCM AND EITHER THEY ARE PRIME OR COMPOSITE\n");
    printf(" type the value for x\n");
    scanf("%d", &x);
    printf(" type the value for y\n");
    scanf("%d", &y);
    printf("x: %d \t y: %d \n", x, y);

//FOR HCF THIS IS THE LOOP
    z = (x>=y)? y: x;

    while (x%z != 0 || y%z != 0){
        z--;
    }
printf("HCF is :%d\n", z);

//FOR LCM THIS IS THE LOOP
    z = 1;
    while ( z%x != 0 || z%y != 0){
        z++;
    }
    printf("LCM is :%d\n", z);

//FOR PRIME AND COMPOSITE NUMBERS THIS IS THE LOOP
//IT IS FOR THE VALUE OF X
    z = x/2;
    r = y/2;

    while(x%z != 0){
        z--;
    }
    while (y%r != 0){
        r--;
    }

    if( z > 1){
        printf("x is composite");
    }else{
        printf("x is prime");
    }
    
    printf("\n");

    if( r > 1){
        printf("y is composite");
    }else{
        printf("y is prime");
    }
    
return 0;
}