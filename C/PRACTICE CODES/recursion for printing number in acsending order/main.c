#include <stdio.h>
void reverse(int a[]);
int main(){
    int o[10], a;
    for (a = 0; a < 10; a++){
        printf("type the %d value :", a + 1);
        scanf("%d", &o[a]);
    } 
    printf("\n");
    reverse(o);
    return 0;
}
void reverse(int a[]){
    int smaller,larger, i, x;
    x = 0;
    while (x <= 9){
        i = 0;
        while(i < 9 - x){
            smaller = a[i] >= a[i+1]? a[i + 1]: a[i];
            larger = a[i] < a[i+1]? a[i + 1]: a[i];
            printf("smaller: %d and larger: %d\n", smaller, larger);
            a[i] = larger;
            a[i + 1] = smaller;
            i++;
        }
        printf("%d\n", a[i]);
        x++;
    }
}