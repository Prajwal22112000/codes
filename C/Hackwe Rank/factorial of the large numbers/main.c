//code for finding the factorial of the number, whose factorial can contian the value upto 500 digits

#include <stdio.h>
int main(){
    int i, j, a, carry, val, total, x;
    int num[200]= {1};
    scanf("%d", &a);
    x = 0;
    for (i = a; i >= 1; i--) {
        j=0;
        // printf("i = %d\n", i);
        do{
            total = num[j]*i + carry;
            carry = total/10;
            num[j] = total%10;
            // printf("total = %d, j = %d, carry = %d, num[j] = %d\n", total, j, carry, num[j]);
            j = j + 1;
            x--;
        }while ( carry != 0 || x >= 0);
        x = j-1;
        // printf("\n");
    }
    // printf("j = %d\n", j);
    j= j - 1;
    do {
        printf("%d", num[j]);
        j--;
    }while (j >= 0);
}