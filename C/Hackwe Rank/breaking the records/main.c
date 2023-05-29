#include <stdio.h>
#include <stdlib.h>
int main(){
    int low, high, a, i, x= 0, y= 0, c= 0, d = 0;
    scanf("%d", &a);
    int ar[a];
    for (i=0 ; i < a; i++) {
        scanf("%d", &ar[i]);
    }
    high = low = ar[0];
    for (i = 0; i < a; i++) {
        x = high;
        y = low;
        high = high>=ar[i]? high: ar[i];
        low = low<ar[i]? low: ar[i];
        if(high > x){
            c++;
        }
        if(low < y){
            d++;
        }
    }
    printf("%d %d", c, d);
}