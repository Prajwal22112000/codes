#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int point(int *p);
int main(){
    //how mant times the prajwal is printed
    int a= 0, b = 0;
    int *p = &a;
    *p = 1 ;
    printf("%d\n", *p);
    printf("%d\n", p);
    printf("%d\n", a);
    printf("%d\n", &a);
    point(&a);
    printf("%d\n", *p);
}
int point(int *p){
    *p = 55 ;
    printf("%d\n", *p);
    return *p;
}