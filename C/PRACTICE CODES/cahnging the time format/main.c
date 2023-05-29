#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    scanf("%s", a);
        if (a[strlen(a) - 2] == 'P' || a[strlen(a) - 2] == 'p')
        {
            if!(a[0] == '1' && a[1] == '2') 
            a[0] = a[0] + 1;
            a[1] = a[1] + 2;
        }
        else if (a[strlen(a) - 2] == 'a' || a[strlen(a) - 2] == 'A')
        {
            if (a[0] == '1' && a[1] == '2' ) {
                a[0] = '0';
                a[1] = '0';
            }
        }
    a[strlen(a) - 2] = '\0';
    printf("%s" , a);
}
