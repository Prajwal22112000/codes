#include <stdio.h>
int sort(int *point);
int main(){
    long double x[6];
    for (int i = 0; i < 6; i++)
    {
        printf("the address of %d interger will be %d\n", i, &x[i]);
    }
}
    