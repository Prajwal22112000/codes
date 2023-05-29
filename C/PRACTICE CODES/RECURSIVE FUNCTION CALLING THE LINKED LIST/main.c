#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
void fun(struct node*head){
    if (head->next == NULL){
        return;
    }
    printf("%d\n", head->data);
    fun(head->next);
    printf("%d\n", head->data);
}

void insert(){
    
}

int main(){

    struct node head;
    struct node one;
    struct node two;
    struct node three;
    struct node four;

    one.data = 1;
    two.data = 2;
    three.data = 3;
    four.data = 4;

    head.next = &one;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = NULL;
    fun(&head);
}