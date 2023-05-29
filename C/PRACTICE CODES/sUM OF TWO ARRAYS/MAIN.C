//the program for the sum of a 3x3 two arrays
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ar1[2][2], ar2[2][2], sum[2][2],i, j;

    //for scanning the elements for the first array
    printf("enter the values for the first array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf(" %d", &ar1[i][j]);
        }
    }
    //for scanning the elements for the second array
    printf("enter the value for the first array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf(" %d", &ar2[i][j]);
        }
    }
    //for adding the elements of the both array by their respective address and printing them
    printf("the sum of the elements with their reapective elements will be :\n") ;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = ar1[i][j] + ar2[i][j];
            printf("%d\n", sum[i][j]);
        }
    }

    return 0;
}