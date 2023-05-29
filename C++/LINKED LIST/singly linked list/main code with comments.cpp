#include <iostream>
using namespace std;

class node {
public:
    int data;
    node * next;
};

//insert at the beginning of the linked list nodes
void insertBeg(node *head, int data){
// create a new node for the linked list
    node *ptr = new node();
// assign the value to the new node data
    ptr->data = data;
// assign the new node to the head
    // cout<<
    ptr->next = head->next;
//now pointer is pointer to the head which is the first node of the linked list
//so the structure is soemthing like this 

    // ptr->head and head = one(first pointer) == ptr->one
    
// now move the head to the first pointer that is now ptr, not the one
    head->next = ptr;
}

//insert the at the end of the linked list nodes
void insertEnd(node *head,int data){
    // now create a new class pointer for insertion
    node *ptr = new node();
    //insert the data
    ptr->data = data;
    //and since we are ending it to the end the pointer that we created will point to NULL
    ptr->next = NULL;
    //for traversing we will create a new pointer = to head
    //REASON: because if we do with head then the head will point the last element of the linked list which we dont want
    node * temp =  head;
    //now traverse
    while(temp->next != NULL){
        temp = temp->next;
    }
    //now we have reached to the element that has temp-next = NULL which means we can point head->next to newly created pointer
    temp->next = ptr;
}

void insertIndex(node * head, int data, int index){
    // decalre a temprory node to traverse the linked list to the certain index
    node *temp = head;
    // i variable = 0 for iterating
    int i = 0;
    // run the loop until we reach the certain index
    while(i < index ){
        // inceraer the value of temp to traverse to next node in the linked list
        temp = temp->next;
        //increase the value of the i to reach to index
        i++;
    }
    //declare new node 
    node *ptr = new node();
    //assign the value
    ptr->data = data;
    // cout<<"data at temp"<<temp->data<<endl;
    
    //here is the tricky part now node is pointer to the index before the desired index, so tem->next is
    //pointing for the index that we want so will assign ptr->next = temp->next; 
    ptr->next = temp->next;
    // now two pointer the temp and ptr are pointing for the same node so will change the temp to ptr
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

    // IMPORTANT
    // the reason why we don't check temp->next is Null because if we delete temp then 
    // we won't have any pointer to assign NULL to since we can't assign NULL to deleted pointer so 
    // we will take a previous element as temp so everything become handy without error
}

void deleteindex(node * head, int index){
    cout<<"delete index called"<<endl;
    // assign value of head tot the temp node pointer
    node * temp = head;
    // check if the next varaible is NULL of the list is empty or not
    if(temp->next == NULL){
        cout<<"sorry the list is empty"<<endl;
        return;
    }
    //declare the int i = 0 for iteration
    int i = 0;
    // run the loop just below one value of index
    while(i < index){
        // now assign the value of next node while iterating
        temp = temp->next;
        // increase the value of the i
        i++;
        // if index is out of range then do the following
        if(temp->next == NULL){
            cout<<"sorry the index is out of range"<<endl;
            return;
        }
    }
    // once we reach end of index - 1
    // we will assign temp2 pointer the value of index or temp->next since this node will be skipped and deleted later
    node*temp2 = temp->next;
    // now assign temp->next the value of temp next next (that would be the node after the index that we want to delete)
    // or might be a NULL pointer as well since our index could be the last index as well
    temp->next = temp->next->next;
    // now delete the pointer that is skipped since it is not neede anymore
    delete temp2;
}

//traverse the linked list
void traverse(node *temp){
    temp = temp->next;
    cout<<"printing the linked list\n";
    while(temp != NULL){
        cout<<temp->data<<endl;
            temp = temp->next;
    }
}

int main(){
    node* head = NULL;
    head = new node();

    insertBeg(head, 12);
    insertBeg(head, 10);
    insertEnd(head, 14);
    insertEnd(head, 16);
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
}
