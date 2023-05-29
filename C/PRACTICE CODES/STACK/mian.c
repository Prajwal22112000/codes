#include <stdio.h>
#include <stdlib.h>
void push(int *p, int *top, int size);
void pop(int *p, int *top);
void display(int *p, int size);

int main(){
    int *q, n, query, top;
    printf("enter the size of the stack\n");
    scanf("%d", &n);
    q = (int *)malloc(sizeof(int)*n);

    top = -1;
    while(1){
        query = 4;
        printf("\npress\n");
        printf("1 to push the data\n2 pop the data\n3 display the stack\n4 exit the code\n");
        scanf("%d", &query);

        switch (query)
        {
        case 1: push(q, &top, n);
            break;
        case 2: pop(q, &top);
            break;
        case 3: display(q, top);
            break;
        case 4: exit(0);
            break;
        default: printf("sorry! wrong input, try again\n");
            break;
        }
    }
}

void push(int *p, int *top, int size){
    int value;
    if( *top == size - 1){
       
        printf("stack is full\n");
        return;
    }
    else {
        printf("enter the value\n");
        scanf("%d", &value);
        *top = *top + 1;
        p[*top] = value;
        printf("%d has been pushed at top\n", value);
        return;
    }
}

void pop(int *p, int *top){
    if( *top == -1 ){
        printf("stack is already empty\n");
        return;
    }
    else {
        *top = *top - 1;
        printf("value at top deleted\n");
        return;
    }
}

void display(int *p, int size){
    printf("the values in the stack are\n");
    for (int i = 0; i <= size; i++)
    {
        printf("%d\n", p[i]);
    }
    return;
}