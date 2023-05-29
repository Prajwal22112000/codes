#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int n;
    n = 0;

    printf("type your password which should be strong");
    scanf("%s", a);

    isalpha(a);

    while (isalpha(a)){
        n++;
    }

    printf(" %d", n);










    return 0;
}
