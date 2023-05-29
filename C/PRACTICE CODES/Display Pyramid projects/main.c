#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y , a, b, m;
    char p, r, j;

    printf("enter the number of rows you want");
    scanf("%d", &y);

    //for the triangle 1 to n
    printf("triangle with increasing just in one side stars\n");
    for(a = 1; a <= y; a++){
       for(b = 1; b <= a; b++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    //for triangle n to 1
    printf("triangle with decreasing just in one side stars\n");
    for(a = y; a >= 1; --a){
       for(b = 1; b <= a; b++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    //for triangle 1 to n with numbers
    printf("triangle with increasing just in one side numbers\n");
    for(a = 1; a <= y; a++){
       for(b = 1; b <= a; b++){
            printf("%d ", b);
        }
        printf("\n");
    }

    printf("\n");

    //for triangle n to 1 with numbers
    printf("triangle with decreasing just in one side numbers\n");
    for(a = y; a >= 1; --a){
       for(b = 1; b <= a; b++){
            printf("%d ", b);
        }
        printf("\n");
    }

    printf("\n");

    //for triangle getting broad 1 to n*2 - 1
    printf("triangle with increasing in a pyramid ordere\n");
    for(a = y ; a >= 1; --a){
       for(m = 1; m <= a ; ++m){
            printf("  ");
       }

       for(b = 1 ; b <= ( y-a )*2 + 1; b++){
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    //for triangle getting broad n*2 - 1 to 1
    printf("triangle with decreasing in a pyramid ordere\n");
    for(a = 1; a <= y; a++){
        for( m = a; m >= 1; --m){
            printf("  ");
        }
        for(b = (y-a)*2 + 1; b >= 1; --b ){
            printf("* ");

        }
        printf("\n");


    }
    //for the numbers
    printf("triangle with increasing in a pyramid ordere numbers\n");
    for(a = y ; a >= 1; --a){
       for(m = 1; m <= a ; ++m){
            printf("  ");
       }

       for(b = 1 ; b <= ( y-a )*2 + 1; b++){
            printf("%d ", b);
        }
        printf("\n");
    }

    printf("\n");
    printf("triangle with decreasing in a pyramid ordere numbers\n");

    for(a = 1; a <= y; a++){
        for( m = a; m >= 1; --m){
            printf("  ");
        }
        for(b = (y-a)*2 + 1; b >= 1; --b ){
            printf("%d ", b);

        }
        printf("\n");
    }
    printf("\n");

    //for the alphabets increasing
    printf("triangle with increasing in a pyramid order alphabet non reapeting\n");
    p = 'A';

    for(a = y ; a >= 1; --a){
       for(m = 1; m <= a ; ++m){
            printf("  ");
       }

       for(b = 1 ; b <= ( y-a )*2 + 1; b++){
            printf("%c ", p = 'A' - 1 + b);
        }
        printf("\n");
    }

    printf("\n");
    //for the alphabets decreasing
    printf("triangle with decreasing in a pyramid order alphabet non repeating\n");
    for(a = 1; a <= y; a++){
        for( m = a; m >= 1; --m){
            printf("  ");
        }
        p = 'A';
        for(b = (y-a)*2 + 1; b >= 1; --b ){
            printf("%c ", (p = p + 1) - 1 );

        }
        printf("\n");
    }
    printf("\n");
    //for the alphabets increasing repeating same word in single line
    printf("triangle with increasing in a pyramid order alphabet reapeting\n");
    p = 'A';

    for(a = y ; a >= 1; --a){
       for(m = 1; m <= a ; ++m){
            printf("  ");
       }

       for(b = 1 ; b <= ( y-a )*2 + 1; b++){
            printf("%c ", p );
        }
        printf("\n");
        p ++;
    }

    printf("\n\n");
    //for the alphabets decreasing repeating same word in single line
    printf("triangle with decreasing in a pyramid order alphabet reapeting\n");
    p = 'A';
    for(a = 1; a <= y; a++){
        for( m = a; m >= 1; --m){
            printf("  ");
        }
        for(b = (y-a)*2 + 1; b >= 1; --b ){
            printf("%c ", p );

        }
        printf("\n");
        p++;
    }
    return 0;
}
