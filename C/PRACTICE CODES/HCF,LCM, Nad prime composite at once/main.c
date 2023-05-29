#include <stdio.h>
#include <stdlib.h>

int main()
{
//FOR HCF THIS IS THE LOOP

     int x, y, z, q, r;

    printf(" TYPE ANY TWO NUMBERS AND WE WILL TELL UYOU THEIR HCF, LCM AND EITHER THEY ARE PRIME OR COMPOSITE\n");

    printf(" type the value for x\n");
    scanf("%d", &x);
    printf(" type the value for y\n");
    scanf("%d", &y);

    printf("x: %d \t y: %d \n", x, y);


    if(x == y)
{
    printf("hcf is %d", x);
}
    else if( x >= y)
{
    z = y;
        while(x%z + y%z != 0)
{
        --z;
}
}
    else if (y >= z)
{
    z = x;
        while(x%z + y%z != 0)
{
        --z;
}}

printf("HCF is :%d \n", z);

//FOR LCM THIS IS THE LOOP
    q = 1;

    while ( q%x != 0 || q%y != 0){
        q++;

    }
    printf("LCM is :%d \n", q);

//FOR PRIME AND COMPOSITE NUMBERS THIS IS THE LOOP

    r = 2;
    //IT IS FOR THE VALUE OF X

if(x==1){
    printf("neither prime nor composite");
}
else if(x <= 0)
{
    printf("type in positive and non zero value ");
}
else
{
    while( x%r != 0)
{   r++;
}

        if(x == r)
{       printf("x is prime");

}       else
{       printf("x is composite");
}
printf("\n");
}
    //IT IS FOR THE VALUE OF Y

    r = 2;

if(y==1){
    printf("neither prime nor composite");
}
else if(y <= 0)
{
    printf("type in positive and non zero value ");
}
else
{
    while( y%r != 0)
{   r++;
}

        if(y == r)
{       printf("y is prime");

}       else
{       printf("y is composite");
}
}


    return 0;
}
