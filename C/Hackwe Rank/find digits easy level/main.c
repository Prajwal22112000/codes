#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n, *a, i , j, k, m, val;
    scanf(" %d\n", &n );
    
    a = (int *)malloc(sizeof(int)*n);
    
    for (i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        j = 0;
        k = a[i];
        while (k != 0) {
            m = k%10;
            if (m != 0 && a[i]%m == 0) {
                j++;
            }
            k = k/10;
            // printf("%d, mod = %d, val = %d\n", j, m, val);
        }
        printf("%d\n", j) ;
    }
}