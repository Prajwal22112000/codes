#include <stdio.h>
int main(){
    int i, j, n, prime, count;
    printf("enter the dimesion of square matrix: ");
    scanf("%d", &n); 
    prime = 2;
    for (i = 0; i < n; i++)
    {
        j = 0;
        while(j < n)
        {
            count = prime/2;
            while(count > 1)
            {
                if(prime%count == 0){
                    break;
                }
                count--;
            }
            if(count == 1){
                printf("%d\t", prime);
                j++;
            }
            prime++;
        }
            printf("\n");
    }
}
    
