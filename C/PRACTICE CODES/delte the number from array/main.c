#include <stdio.h>
int main(){
    int a[100], i, n, pos;
    printf("enter the number of elements you want to insert\n");
    scanf("%d", &n);
    if(n > 100){
    printf("cannot scan elements\n");
    }else{
        printf("enter the elements\n");
        for(i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
    printf("enter the index number of element you want to delete\n");
    scanf("%d", &pos);
        for(i = pos; i <n; i++){
            a[i] = a[i+1];
        }
    n = n-1;
    printf("the new array will be\n");
        for ( i = 0; i < n; i++){
            printf("%d\n", a[i]);
        }
    }
return 0;
}