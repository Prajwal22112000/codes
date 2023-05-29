#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int vowel = 0, consto = 0, space =0, num = 0, i , j;
    char* a;
    a = malloc(sizeof(char)*1000);
    printf("enter the sentence\n");
    fgets(a, 1000, stdin);
    
    for (i = 0; a[i] != '\0'; i++)
    {
        //in case if the string contains the capital words
        a[i] = toupper(a[i]);
        //for counting the spaces
        if (a[i] == ' ')    
        {
            space++;
        }
        //for counting the vowels
        else if ( a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' )
        {
            vowel++;
        }
        //for counting the digits
        else if (a[i] <= '9' && a[i] >= '0')
        {
            num++;
        }
        //the rest will be consonants
        else if(a[i] >= 'A' && a[i] <= 'Z')
        {
            consto++;
        }
        printf("consonants = %d char = %c\n ", consto, a[i]);
    }
    printf("vowel = %d\nconsonents = %d\nspace = %d\nnumbers = %d", vowel, consto, space, num);

    return 0;
}