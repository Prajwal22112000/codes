#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char *s1 = (char*)malloc(100*sizeof(char));
    char *s2 = (char*)malloc(100*sizeof(char));
    int i = 0, j = 0;
    printf("enter the string 1: ");
    gets(s1);
    printf("enter the string 2: ");
    gets(s2);
    s1 = strlwr(s1);
    s2 = strlwr(s2);
    while(s1[i] != '\0'){
        j = 0; 
        while (s2[j] != '\0')
        {
            if (s1[i] == s2[j])
            {
                s2[j] = s1[i] = '-';
                break;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (s1[i] != '\0')
    {
        if(s1[i] != s2[i]){
            printf("not an anagram");
            break;
        }
        i++;
    }
    if (s1[i] == '\0')
        printf("an anagram");
    
    
}