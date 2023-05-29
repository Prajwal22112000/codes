class node{
    node next;
    int data;
    node(){
        next = null;
    }
    node(int value){
        this.data = value;
        next = null;
    }
}

class linked_list{
    public static void insert(node head, int data,  int index){
        int n = 0;
        node newnode = new node(data);
        while(head != null ){
            if(n == index){
                break;
            }
            if(n > index){
                return;
            }
            head = head.next;
            n++;
        }
        newnode.next = head.next;
        head.next = newnode;
    }

    public static void insertBeg(node head, int data){
        node newnode = new node(data);
        newnode.next = head.next;
        head.next = newnode;
    }

    public static void insertEnd(node head, int data){
        // node newnode = head.next;
        while(head.next != null){
           head = head.next;
        }
        node newnode = new node(data);
        newnode.next = head.next;
        head.next = newnode;
    }

    public static void reverseList(node head){
        if(head.next == null){
            System.out.println("Linked list is empty");
            return;
        }
        if(head.next.next == null){
            System.out.println("LInked list cannot be reversed because it contains only one variable");
            return;
        }
        node previous = null;
        node current = head.next;
        node next = null;
        do{
            next = current.next;
            current.next = previous;
            previous = current;
            current = next;
        }while(next != null);
        head.next = previous;
        System.out.println("Linked List is Reversed");
    }

    public static void printList(node head){
        System.out.println("the contents of the linked list are");
        while(head.next != null){
            System.out.println(head.next.data);
            head = head.next;
        }
    }

    public static void main(String[] args) {
        node headnode = new node();
        reverseList(headnode);
        insert(headnode,66,0);
        reverseList(headnode);
        insert(headnode,23, 0);
        insert(headnode,12, 2);
        printList(headnode);
        insertBeg(headnode, 1);
        printList(headnode);
        insertEnd(headnode, 100);
        printList(headnode);
        reverseList(headnode);
        printList(headnode);
    }
}

