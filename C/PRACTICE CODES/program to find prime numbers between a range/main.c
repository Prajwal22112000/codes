#include <stdio.h>
#include <stdlib.h>
int main()

{
    int a, b, c, d,x;

    printf("type the range of number you want to find the prime numbers between them\n");
    printf("type the first number: ");
    scanf("%d", &a);
    printf("type the second number: ");
    scanf("%d", &b);

    c = (a<= b)? a: b;
    d = (a<= b)? b: a;

    while (c <= d)
    {
        if(c == 1){
            c++;
            continue;
        }
        x = c/2;
        while (c%x != 0)
        {
            --x;
        }
        if(x == 1){
            printf("%d\n", c);
        }
        c++;
    }
    return 0;
}
