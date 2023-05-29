#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    what is the distance between two points p, q
    d = sqrt(x - a)2 + (y - b)*/

    float x, y, a, b, d;

    printf("type the value for x ");
    scanf("%f", &x);
    printf("type the value for y ");
    scanf("%f", &y);
    printf("type the value for a ");
    scanf("%f", &a);
    printf("type the value for b ");
    scanf("%f", &b);

    printf("\n");

    printf("so the \n x = %f \n y = %f \n a = %f \n b = %f \n", x, y, a, b);

    d= sqrt( ((x -a)*(x -a)) + ((y - b)*(y - b)) );

    printf(" so the distance will be : %f", d);

    return 0;
}
