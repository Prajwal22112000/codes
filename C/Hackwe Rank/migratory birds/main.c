#include <stdio.h>
int main(){
    int a, i, sum = 0;
    scanf("%d", &a);
    int ar[a];
    int s[5], ar2[5];
    //to scan the number to zero so that we could increase it by each number due to the checking of the ar
    for (i=0; i < 5; i++) {
        s[i] = 0;
    }
    //
    for (i=0; i<5; i++) {
            ar2[i] = i+1;
    }
    for (i=0; i < a; i++) {
        scanf("%d", &ar[i]);
    }
    for (i= 0 ;i<a; i++) {
        if (ar[i] == 1) {
            s[0]= s[0]+1;
        }
        else if (ar[i] == 2) {
            s[1]= s[1] + 1;
        }
        else if (ar[i] == 3) {
            s[2]= s[2]+1;
        }
        else if (ar[i] == 4) {
            s[3]=s[3]+1;
        }
        else if (ar[i] == 5) {
            s[4]=s[4]+1;
        }
    }
    sum = 0;
    for (i= 0; i<5; i++) {
        if(sum<=s[i]){
            sum = s[i];
        }
    }
    for (i= 0; i<5; i++) {
        if (s[i] == sum) {
        break;
        }
    }
    printf("%d", ar2[i]);
}
