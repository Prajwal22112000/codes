#include <stdio.h>
#include <stdlib.h>
int main(){
    int q[100], n, i , high, low, mid, value, temp, j;
    printf("enter the size of the array\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0+i; j < n; j++)
        {
            if (q[j] < q[i])
            {
                temp = q[j];
                q[j] = q[i];
                q[i] = temp;
            }
        }
    } 
    printf("sorted array\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ", q[i]);
    }
    
    printf("\nenter the number that you wanna search in the array\n");
    scanf("%d", &value);
    high = n-1;
    low = 0;
    mid = (high + low)/2;

    i = 0;
    while (1)
    {
        if (q[mid] == value)
        {
            printf("%d value is found at index %d\n", value, mid);
            break;
        }
        else if(q[mid] < value)
        {
            low = mid;
            mid = (low + high)/2;
        }
        else if (q[mid] > value)
        {
            high = mid;
            mid = (high + low)/2;
        }

        i++;
        if (i == n)
        {
            printf("%d is not available in the array\n", value);
            break;
        }
    }
}