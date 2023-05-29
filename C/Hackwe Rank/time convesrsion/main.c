// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int h, m, s;
    char a[3];
    scanf("%d %d %d\n", &h,&m,&s);
    fgets(a, 3, stdin);
    
    printf("%d:%d:%d%s", h, m, s, a);
    return 0;
}