#include <stdio.h>
int main(){

    int i = 0, j= 0, k;
    char A[5] = {3, 5, 2, 3, 4};
    while (i < 5)
    {
        j = 0;
        while (j < 5)
        {
            if(A[i] == A[i + j+ 1] ){
                goto label;
            }
            j++;
        }
         i++;
    }
    label:
    printf("so the first recurring element is %d", A[i]);
return 0;
}