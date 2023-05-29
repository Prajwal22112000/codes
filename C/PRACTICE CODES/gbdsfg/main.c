#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20] = {2,7,5,3,1}, i;

    printf("enter any numbers of integers and we will find you the greatest you entered");
    for ( i = 0; i < ; i++)
    {
        /* code */
    }
    

    for (i = 0; i < 5; ++i){
        if( a[0] < a[i+1] ){
            a[0]= a[i+1];
        }
    }
    printf("%d \b %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);

    printf("\n%d", a[0]);
    return 0;
}
