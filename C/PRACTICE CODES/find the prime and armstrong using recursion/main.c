#include <stdio.h> 
#include <math.h>
int checkprime(int number_entered);
int checkAS(int number_entered);

int main(){
    int q;
    printf("\ntype any number and we will tell if its a prime number and armstorng number or not: ");
    scanf("%d", &q);
    printf("the number you entered is : %d\n", q );
        checkprime(q);
    printf("\n");
        checkAS(q);
    return 0;
}
int checkprime(int number_entered){
    int i = number_entered/2;
    while(number_entered%i != 0){
        i--;
    }
    if(i == 1){
        printf("it is a prime number");
    }else{
        printf("it is a composite number");
    }
}
int checkAS(int number_entered){
    int  a, b, x, y, z;
    a = number_entered;
    b = number_entered;
    x = 0;
    z = 0;

    while (a != 0){
        a = a/10;
        x++;
    }
    
    y = 0;
    a = 0;
    while (b != 0){
        y = b%10;
        z =  z + pow(y, x) + .00000001;
        b = b/10;
    }
    if ( z == number_entered){
        printf("it is an armstrong number");
    }else{
        printf("it is not an armstrong number");
    }
}