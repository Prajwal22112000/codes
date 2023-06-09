#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    int n, value;
    struct node * head;
    printf("what do you want to perform\n");
    printf("1. insert at end of linked list\n");
    printf("2. insert at beginning of linked list\n");
    printf("3. insert at any place of linked list\n");
    printf("4. print the linked list of linked list\n");
    scanf("%d", &n);
    
    if (n = 1)
    {
        printf("enter the element you want to insert\n");
        scanf("%d", &value);
        end();
    }
    if (n = 2)
    {
        printf("enter the element you want to insert\n");
        scanf("%d", &value);
        front();
    }
    if (n = 3)
    {
        printf("enter the element you want to insert\n");
        scanf("%d", &value);
        pos();
    }
    if (n = 4)
    {
        print(head);
    }
    
}

void push(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);
 
    /* 4. move the head to point to the new node */
    (*head_ref)    = new_node;
}
    
/* Given a node prev_node, insert a new node after the given
   prev_node */
void insertAfter(struct node* prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)
    {
      printf("the given previous node cannot be NULL");
      return;
    }
 
    /* 2. allocate new node */
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
 
    /* 3. put in the data  */
    new_node->data  = new_data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;
}
 
/* Given a reference (pointer to pointer) to the head
   of a list and an int, appends a new node at the end  */
void append(struct node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
 
    struct node *last = *head_ref;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->data  = new_data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
 
// This function prints contents of linked list starting from head
void print(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}