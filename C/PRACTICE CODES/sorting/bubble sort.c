#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10], i, j, temp, n;
    printf("enter the number of values\n");
    scanf("%d", &n);
    printf("enter the values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }                     

    for (i = 0; i < n; i++)
    {
        for (j = 0+i; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    } 
    printf("sorted values\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }           
}