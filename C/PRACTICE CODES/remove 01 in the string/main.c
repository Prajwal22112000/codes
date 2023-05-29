#include <stdio.h>
int main(){
    int i, j, n, count;
    printf("enter the number of characters for the array: ");
    scanf("%d", &n);
    char arr[n], arr2[n];
    printf("enter the string: ");
    scanf(" %s", arr);
    count = 0;
    for(i = 0; i < n; i++){
        arr[count] = arr[i];
        if(arr[count-1] == '0' && arr[count] == '1'){
            count = count - 2;
        }
        count++;
    }
    for(i = 0; i < count; i++){
        printf("%c", arr[i]);
    }
}