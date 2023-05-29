#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("enter any alphabet?");
    scanf("%c", &x);

    if (isalpha(x)){
        if(x == 'A'|| x == 'E'||x == 'I'|| x == 'O'||x == 'U' || x == 'a' || x == 'e'||x == 'i'|| x == 'o'||x == 'u'){
            printf("this is a vowel");
    }
        else{
            printf("this is a consonant");
            }
    }else{
        printf("please enter a valid alphabet");
    }
    return 0;
}
