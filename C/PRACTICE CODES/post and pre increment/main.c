#include <stdio.h>
int main(){
    int i = 7;
    printf("%d\n", --i*--i*--i);
    printf("%d", --i+-i+--i);
}