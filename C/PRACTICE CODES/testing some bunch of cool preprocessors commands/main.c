#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char a[20];

    printf("enter a password which is between 8 to 20 and should contain at least one upper case letter and one lower case letter and one symbol and one numerical digit\n");
    scanf(" %s", &a);

    while ( isalpha(a[0])){

        a[0]++;
        printf(" %s", a);

    }

}
