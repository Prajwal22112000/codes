//program to find the biggest and smallest numnber in the array
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[100], i, n,  max, min;
    printf("enter the number of elemebts you want to insert within 99\n");
    scanf(" %d", &n);
    printf("enter the elements you want to insert\n");
    for (i = 0; i < n ; i++)
    {
        scanf("%d\n", &a[i]);
    }
    min = max = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i]) {
            min = a[i];
        }
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("max element if %d\nmin elemnt if %d", max, min);
}