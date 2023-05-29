#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *s = (char*)malloc(100*sizeof(char));
    printf("enter your string: ");
    fgets(s, 100, stdin);
    s = strupr(s);
    int i = 0;
    while (s[i] != '\0') 
    {
        if(s[i] == 65 && s[i+1] == 66){
            s[i+1] = 'D';
        }
        else if(s[i] == 'C' && s[i+1] == 'D'){
            s[i] = 'B';
            s[i+1] = 'C';
        }
        i++;
    }
    puts(s);
}