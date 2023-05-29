#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[100], i, n, item, x;
    printf("number of elements you want to insert (should be less than 100)\n");
    scanf(" %d", &n);
    printf("entere the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &a[i]);
    }
    printf("enter the index position\n");
    scanf("%d", &x);
    printf("enter the element\n");
    scanf("%d", &item);
    for ( i = n; i >= x; i--)
    {
        a[i] = a[i-1];
    }
    a[x] = item;
    for (i = 0; i < n+1; i++)
    {
        printf("%d\n", a[i]);
    }
}