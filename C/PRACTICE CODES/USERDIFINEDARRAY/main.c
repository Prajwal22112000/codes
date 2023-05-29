#include <stdio.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element number %d: ", i);
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d element is %d: \n",i , a[i]);
    }    
}