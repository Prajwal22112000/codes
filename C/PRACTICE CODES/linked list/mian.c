#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node * head;
    struct node * first;
    struct node * second;
    struct node * third;

    head = (struct node*)malloc(sizeof(struct node));
    first= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = third;

    third->data = 4;
    third->next = NULL;

    //while loop to display the elements
    int i = 0;
    while (head != NULL)
    {
        i++;
        head = head->next;
    }
    printf("the linked list contains %d nodes", i);
}