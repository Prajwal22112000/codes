#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y, z;
    x = 10;
    y = 20;

    printf("x = %d & y = %d\n", x, y);

    z = x;
    x = y;
    y = z;

    printf("x = %d & y = %d\n", x, y);

    return 0;
}
