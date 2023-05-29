#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int order();
void display(int n);
void serve();
    int flag;
    int n, i, j, l;
    int burgers = 100;
    int coke = 100;
    int pastries = 100;
    int pizza = 100;
    int fries =  100;
    int order_served = 0 ;
    int order_taken = 0;
    
int main(){ 
    int x = 0;
    do
    {
        printf("what do you want to order\n");
        printf("1\torder\n");
        printf("2\tserve\n");
        printf("3\tdisplay\n");
        printf("4\texit the program\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1: flag = order();
            break;

        case 2: 
            if (flag == 1)
            {
                order();
            }
            else
            {
                printf("SORRY! NO order has not been placed\n\n");
                printf("would you like to try again or exit\n");
                printf("1\ttry again\n");
                printf("2\texit");
                scanf("%d", n);
                if (n = 1)
                {
                    break;
                }
                else
                {
                    exit(0);
                }
            }     
            break;

        case 3: display(n);
            break;

        case 4: exit(0);
        default: printf("sorry invalid input");
            break;
        }
        printf("do you want to try again\n");
        getchar();
    }while(x == 1);
    return 0;
}
int order(){
    int x = 1;
    int item, quantity;

    do
    {
        printf("what would you like to order\n PRESS\n");
        printf("1.Burgers   \t%d units\n", burgers);
        printf("2.Pastries  \t%d units\n", pastries);
        printf("3.Coke      \t%d units\n", coke);
        printf("4.Fries     \t%d units\n", fries);
        printf("5.Pizza     \t%d units\n", pizza);
        scanf("%d", &item);
        printf("How Many ?\n");
        scanf("%d", &quantity );
        while (1)
        {
            printf("would you like to order more?\nPRESS 1 for YES\nPRESS 2 for NO\n");
            gets(flag);
            if (flag == 1)
            {   
                x = 1;
                break;
            }else if(flag == 2){
                x = 0;
                break;
            }else{
                printf("wrong input try again\n");
            }
        }
        printf("%d", x);
    }while(x == 1);
    printf("%d", x);

}
void display(int n){
    printf("1.Burgers   \t%d units\n", burgers);
    printf("2.Pastries  \t%d units\n", pastries);
    printf("3.Coke      \t%d units\n", coke);
    printf("4.Fries     \t%d units\n", fries);
    printf("5.Pizza     \t%d units\n", pizza);
}
void serve(){

}
