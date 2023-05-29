#include <stdio.h>
int main(int argc, const char** argv) {
    int c1, c2, r1, r2;
    //code to scan the dimension of both arrays
    printf("enter the dimeension Row x columm for the first matrix");
    scanf("%d%d", &r1, &c1);
    printf("enter the dimeension row x columm for the second matrix");
    scanf("%d%d", &r2, &c2);

    //code to scan the elements in the both arrays
    int ar1[r1][c1], ar2[r2][c2], i = c1, j = r2;
    printf("enter the values for the first matrix:");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j< c1 ; j++)
        {
            scanf(" %d", &ar1[i][j]);
        }
    }
    printf("enter the values for second matrix:");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j< c2 ; j++)
        {
            scanf(" %d", &ar2[i][j]);
        }
    }

    //code to print the multiple of two matricies
    int sum = 0, k = 0;
    if (c1 != r2)
    {
        printf("the following matrix can't be multiplied");
    }
    else
    {
        printf("the required matrix would be:\n");
        for(k = 0; k < r1; k++)
        { 
            for (i = 0; i < c2; i++)
            {
                sum = 0;
                for (j = 0; j < r2; j++)
                {
                    sum = sum + ar1[k][j]*ar2[j][i];
                }
                printf("%d\t", sum);
            }
            printf("\n");
        }
    }
    return 0;
}