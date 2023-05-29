#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int i, a;
    scanf(" %d" , &a);
    int x[a];
        for (i=0; i<(2*a); i=i+2) {
            scanf(" %d", &x[i]);
            scanf(" %d", &x[i+1]);
        }       
        for (i=0; i<(2*a); i=i+2) {
            printf("%d\n", x[i]&x[i+1]);
        }
}