#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *str = (char *)malloc(1000*sizeof(char));
    char alpha[26] = {0};
    puts("enter your string: ");
    gets(str);
    str = strupr(str);
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if(alpha[str[i] - 65] == 0){
            count++;
        }
        alpha[str[i] - 65] = 1;
        i++;
    }
    if(count == 26)
        printf("pangram ");
    else
        printf("not pangram %d", count);
}