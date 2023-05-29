#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 float a, b, c;
 float S, Area;
 printf(" type all the three lines of a triangle\n");
 scanf(" %f%f%f", &a, &b, &c);

 S = (a + b + c)/2;
 Area = sqrt(S*(S-a)*(S-c)*(S-b));

 printf("area of the traingle will be %f square unit", Area);
    return 0;
}
