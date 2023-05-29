#include <stdio.h>
#include <stdlib.h>

int main(){
    long long int x, l, n, i, j, sum;
    char s[100];
        
    //code to scan the string 
    scanf("%s\n", s);
    //code to scan the number of times you are going to repeat the loop
    scanf("%lld", &x);

    //code to count the number of characters in the string
    l=i=0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a') 
        {
            l++;
        }
        i++;
    }
    // printf("i = %lld, x = %lld, l = %lld\n", i , x, l);
    
    //loop to record the number of a in the string in the variable name 'l'
    sum = n = 0;
    while(n < x)
    {
        //loop when the i is smaller than the x-n 
        if( x - n > i)
        {
            sum = sum + l;
            n = n + i;
        }
        //code when distance between x and n becomes larger than 'i'
        else if(x - n <= i)
        {
            for (j = 0; j < i; j++) 
            {
                if (s[j] == 'a') 
                {
                    sum++;
                }
            n++;
                if (n == x) 
                {
                    break;
                }
            }
        }
        printf("%lld\n", sum);
    }

    printf("%lld", sum);
}
    

