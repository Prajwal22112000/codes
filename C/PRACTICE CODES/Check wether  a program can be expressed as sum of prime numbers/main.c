#include <stdio.h>
#include <stdlib.h>
int checkprime(int n);
int main(){
    int x, b;
    printf("type number name: ");
    scanf("%d", &x);
    b = x/2;
    while(b >= 1){
        if(checkprime(b) == 1 && checkprime(x- b) == 1){
            printf("%d = %d + %d \n", x, b, (x - b));
        }
    b--;
    }
return 0;    
}
int checkprime(int n){
    int i = n/2;
    while(n%i != 0){
        --i;
        if (i == 1)
            return 1;
    }
    if(i != 1)
        return 0;
}