#include <stdio.h>

int main()
{
    int n, m, i , j, k;
    printf("enter the size of first sorted array\n");
    scanf("%d", &n);
    printf("enter the size of second sorted array\n");
    scanf("%d", &m);
    k = n + m;
    int a1[n], a2[m], sorted_array[k];
    
    printf("enter the elements for the array 1, should be sorted already\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("enter the elements for the array 2, should be sorted already\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a2[i]);
    }
    printf("hello konichiwa");
    k = i = j = 0; 
    while(i < n || j < m)
    {
        if (a1[i] > a2[j])
        {
            sorted_array[k] = a2[j];
            j++;
            k++;
        }
        else if (a1[i] < a2[j])
        {
            sorted_array[k] = a1[i];
            i++;
            k++;
        }
    }
    
    printf("sorted array is\n");
    for (i = 0; i < n+m; i++)
    {
        printf("%d ", sorted_array[i]);
    }
    return 0;
}
