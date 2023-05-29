#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 5, b;
    b = --a + a++;
    printf("b = %d & a = %d\n", b, a);
    b = ++a - b ++;
    printf("b = %d & a = %d", b, a);
    return 0;
}