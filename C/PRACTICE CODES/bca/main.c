#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[20], n, num, num2, i, j;

    printf("enter  the size of the array must be below 20\n");
    scanf("%d", &n);
    printf("enter the numbers\n");
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    num = 0, num2 = 0;

    for(i = 0;i < n; i++){
        if(num > num2){
            num2 = num;
        }
        if(array[i] >= num){
            num = array[i];
        }
    }

    printf("\n 2nd largest num = %d\n largest num = %d", num2, num);
    num2 = 0;
    for(i = 0; i< n; i++){
        if(array[i] == num){
            continue;
        }
        if(array[i] > num2){
            num2 = array[i];
        }
    }

    printf("\n 2nd largest num = %d\n largest num = %d", num2, num);


}
