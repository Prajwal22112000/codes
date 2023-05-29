#include <stdio.h>
#include <stdlib.h>

int main()
{
    //HRA = Housing and rent allowences
    //DA = Dearing allwences

    float S, H, B, D;

    printf(" please input your Basic ?\n");
    scanf(" %f", &B);

    H = B/ 10;
    D = B/ 2;

    S = B + H + D;

    printf(" total salary will be : %f \n", S);
    printf(" basic : %f\n", B);
    printf(" HRA : %f\n", H);
    printf(" DA : %f\n", D);

    return 0;
}
