#include <stdio.h>
#include <stdlib.h>
int return_sum(int n);

int main(){
    int num;
    printf("Enter the N number you want to find the sum of");
    scanf("%d", &num);
    printf("sum = %d", return_sum(num));
return 0;
}
int return_sum(int n){
    if (n != 0)
        return n + return_sum(n -1);
    else
        return n;
}