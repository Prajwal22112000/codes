#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node * next;
};
void add(Node head, int data){
    Node node;
    node.data = data;
    node.next = NULL;
    head.next = &node;
}