#include <iostream>
using namespace std;

class node {
public:
    int data;
    node * next;
};

void insertBeg(node *head, int data){
    node *ptr = new node();
    ptr->data = data;
    ptr->next = head->next;
    head->next = ptr;
}

void insertEnd(node *head,int data){
    node *ptr = new node();
    ptr->data = data;
    ptr->next = NULL;
    node * temp =  head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = ptr;
}

void insertIndex(node * head, int data, int index){
    node *temp = head;
    int i = 0;
    while(i < index ){
        temp = temp->next;
        i++;
        if(temp == NULL){
            cout<<"sorry the index value is larger than the linked list size"<<endl;
            return;
        }
    }
    node *ptr = new node();
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
}

void deleteBeg(node * head){
    cout<<"delete beginning called"<<endl;
    // if the linked list is empty do this, it will check the head->next that should be null
    if(head->next == NULL){
        cout<<"the linked list is empty"<<endl;
        return;
    }
    // if not then create a new node that will point to the next of head i.e to the first element of 0 index
    node *temp = head->next;
    // then we need to skip that element in order to delete it so will assign next of head to next next of head
    head->next = head->next->next;
    // now delete the temp since its holding the previous index element of the list
    delete temp;
}

void deleteEnd(node * head){
    cout<<"delete end called"<<endl;
    // check if the list is empty of not
    if(head->next == NULL){
        cout<<"the linked list is empty"<<endl;
        return;
    }
    // if not then assign the head to the temp node pointer
    node *temp = head;    
    // now use a loop to itereate to the one element before the last by checking the next next of temp
    // if true then break
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    // noe delete the temp->next since it is pointing to the last element in the list
    delete temp->next;
    // now assign the temp->next to NULL in order to print a linked list that terminates
    temp->next= NULL;

    // the reason why we don't check temp->next is Null because if we delete temp then 
    // we won't have any pointer to assign NULL to since we can't assign NULL to deleted pointer so 
    // we will take a previous element
}

void deleteindex(node * head, int index){
    cout<<"delete index called"<<endl;
    node * temp = head;
    if(temp->next == NULL){
        cout<<"sorry the list is empty"<<endl;
        return;
    }
    int i = 0;
    while(i < index){
        temp = temp->next;
        i++;
        if(temp->next == NULL){
            cout<<"sorry the index is out of range"<<endl;
            return;
        }
    }
    node*temp2 = temp->next;
    temp->next = temp->next->next; 
    delete temp2;
}

void traverse(node *temp){
    temp = temp->next;
    cout<<"printing the linked list\n";
    while(temp != NULL){
        cout<<temp->data<<endl;
            temp = temp->next;
    }
}

// void reverse(node**temp){
//     cout<<"reverse linked list function called"<<endl;
//     if((*temp)->next == NULL){
//         cout<<"sorry the linked list is empty"<<endl;
//     }
//     else if((*temp)->next->next == NULL){
//         cout<<"sorry the one element linked list cannot be reversed"<<endl;
//     }
//     else{
//         class node *temp = NULL;
//         class node *prev = NULL;
//         class node *current = (*temp);
//         while(current != NULL) {
//             temp = current->next;
//             current->next = prev;
//             prev = current;
//             current = temp;
//         }
//         (*temp) = prev;
//     }
// }

node* reverse(node* head) {
    if(head == NULL){return head;}
    node *pre = head, *current = head->next;
    node *next = head;
    head->next = nullptr;

    while(current != NULL){
        next = current->next;
        current->next = pre;
        pre = current;
        current = next;
    }
    return pre;    
}

int main(){
    node* head = NULL;
    head = new node();
    deleteindex(head, 3);
    deleteBeg(head);
    deleteEnd(head);

    insertBeg(head, 12);
    insertBeg(head, 10);
    insertEnd(head, 14);
    insertEnd(head, 15);
    insertIndex(head, 11, 1);
    insertIndex(head, 13, 3);
    traverse(head);
    deleteBeg(head);
    traverse(head);
    deleteEnd(head);
    traverse(head);
    deleteindex(head, 3);
    traverse(head);
    deleteindex(head, 3);
    traverse(head);
    reverse(head);
    traverse(head);
}