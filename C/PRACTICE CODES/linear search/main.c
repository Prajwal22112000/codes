#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[10], i, n, value;
    printf("enter the number of values\n");
    scanf("%d", &n);
    printf("enter the values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("enter the value you want to search\n");
    scanf("%d", &value );
    for (i = 0; i < n; i++)
    {
        if (value == a[i])
        {
            printf("%d is found at index %d", value, i );
            break;
        }
    }
    if(i == n)
    {
        printf("%d is not available");
    }
    return 0;
}