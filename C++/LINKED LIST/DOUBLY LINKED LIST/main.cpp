#include <iostream>
using namespace std;

class node{
public:
    node*next;
    node*pre;
    int data;
};

void insertBeg(node*head,node*tail, int data){
    node * ptr = new node();
    ptr->data = data;
    if(head->next == tail){
        tail->pre = ptr;
        head->next = ptr;
        ptr->next = tail;
        ptr->pre = head;
    }
    else{
        ptr->next = head->next;
        ptr->pre = head;
        head->next->pre = ptr;
        head->next = ptr;
    }
}
void inesrtEnd(node*head,node*tail, int data){
    node * ptr = new node();
    ptr->data = data;
    if (head->next == tail){
        head->next = ptr;
        tail->pre = ptr;
        ptr->next = tail;
        ptr->pre = head;
    }else{
        ptr->pre = tail->pre;
        ptr->next = tail;
        tail->pre->next = ptr;
        tail->pre = ptr;
    }
}
// void inesrtIndex(node*head, int data, int index){

// }
// void deleteBeg(node*head, int data){

// }
// void deleteEnd(node*head, int data){

// }
// void deleteIndex(node*head, int index){

// }
void traverse(node*head){
    node * temp = head->next;
    while(temp->next != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void traverseReverse(node*tail){
    node * temp = tail->pre;
    while(temp->pre != NULL){
        cout<<temp->data<<endl;
        temp = temp->pre;
    }
}

int main()
{
    node *head = new node();
    node *tail = new node();
    head->next = tail;
    head->pre = NULL;
    tail->next = NULL;
    tail->pre = tail;
    insertBeg(head,tail, 3);
    insertBeg(head,tail, 2);
    insertBeg(head,tail, 1);
    inesrtEnd(head,tail, 4);
    inesrtEnd(head,tail, 5);
    inesrtEnd(head,tail, 6);
    // inesrtIndex(&head, 3, 2);
    // inesrtIndex(&head, 4, 3);
    traverse(head);
    // deleteBeg(&head);
    // deleteEnd(&head);
    // deleteIndex(&head, 3);
    traverseReverse(tail);
}