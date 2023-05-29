import java.util.Scanner;

class node{
    int data;
    node next;
    node(){
        next = null;
    }
    node(int d){
        data = d;
        next = null;
    }
}
class linkedlist{
    public static void  insertBeg(node temp, int data){
        System.out.println("insert at beginning function called");
        node ptr = new node(data);
        ptr.next = temp.next;
        temp.next = ptr;
    }

    public static void  insertEnd(node head, int data){
        System.out.println("insert at end function called");
        node ptr = new node(data);
        node temp = head;
        while(temp.next != null){
            temp = temp.next;
        }
        temp.next = ptr;
    }

    public static void insertIndex(node temp, int data, int index){
        System.out.println("insert at index function called");
        if(temp.next == null){
            System.out.println("sorry the linked list is empty");
        }
        node ptr = new node(data);
        int i = 0;
        while(i < index){
            if(temp.next == null){
                System.out.println("index given for the insertion is out of the range");
                return;
            }
            temp = temp.next;
            i++;
        }
        ptr.next = temp.next;
        temp.next = ptr;
    }

    public static void deleteBeg(node head){
        System.out.println("delete beginning function called");
        if(head.next == null){
            System.out.println("linked list is empty");
        }
        head.next = head.next.next;
    }

    public static void deleteEnd(node head){
        System.out.println("delete end index function called");
        if(head.next == null){
            System.out.println("linked list is empty");
        }
        else{
            while(head.next.next != null){
                head = head.next;
            }
            head.next = head.next.next;
        }
    }

    public static void deleteIndex(node head, int index){
        System.out.println("delete specified index function called, index: " + index);
        if(head.next == null){
            System.out.println("linked list is empty");
        }
        else{
            node temp = head;
            int i = 0;
            while(i < index){
                if(temp.next == null){
                    System.out.println("the index given is out of range");
                    return;
                }
                temp = temp.next;
                i++;
            }
            temp = temp.next.next;
        }
    }

    public static void reverse(node head){
        System.out.println("reverse linked list function called: ");
        if(head.next == null || head == null){
            System.out.println("linked list is empty");
        }
        else if(head.next.next == null){
            System.out.println("linked list only contains one element thus cannot be reversed: ");
        }
        else{
            node current = head.next;
            node prev = null;
            node next = null;
            while (current != null) {
                next = current.next;
                current.next = prev;
                prev = current;
                current = next;
            }
            head.next = prev;
        }
    }

    public static void print(node temp) {
        System.out.println("print function called");
        if (temp == null){
            System.out.println("linked list is null");
        }
        else{
            while(temp.next != null){
                System.out.println(temp.next.data);
                temp = temp.next;
            }
        }
    }

    public static void printIndex(node head, int index){
        if(head.next == null){
            System.out.println("sorry, the linked list is empty");
        }
        else{
            int i = 0;
            while(i <= index){
                if(head == null){
                    System.out.println("sorry the index given is out of range");
                    return;
                }
                i++;
                head = head.next;
            }
            System.out.print("number at " + index + " index is " + head.data);
        }
    }

    public static void main(String[] args) {
        node head = new node();
        int a, b = 1, data, index;
        try{
            Scanner scn = new Scanner(System.in);
            while(b == 1){
                System.out.println("\ntype of number of operation you want to perform: ");
                System.out.println("0 to exit");
                System.out.println("1 to insert a node at beginning ");
                System.out.println("2 to insert a node at the ending ");
                System.out.println("3 to insert a node at specified index ");
                System.out.println("4 to delete the node from the beginning ");
                System.out.println("5 to delete the node from the ending ");
                System.out.println("6 to delete the node from the specified index ");
                System.out.println("7 to reverse the linked list");
                System.out.println("8 to print the linked list");
                System.out.println("9 to print the required index ");
                System.out.println("10 to insert multiple elements");
                a = scn.nextInt();
                switch (a) {
                    case 0:
                        System.out.println("Thank You Have A Nice Day: ");
                        b = 0;
                        return;
                    case 1:
                        System.out.println("type the number you want to insert at beginning : ");
                        data = scn.nextInt();
                        insertBeg(head, data);
                        break;
                    case 2:
                        System.out.println("type the number you want to insert at the ending of the linked list: ");
                        data = scn.nextInt();
                        insertEnd(head, data);
                        break;
                    case 3:
                        System.out.println("type the number you want to insert: ");
                        data = scn.nextInt();
                        System.out.println("type the index position: ");
                        index = scn.nextInt();
                        insertIndex(head, data, index);
                        break;
                    case 4:
                        deleteBeg(head);
                        break;
                    case 5:
                        deleteEnd(head);
                        break;
                    case 6:
                        System.out.println("enter the index position you want to delete: ");
                        index = scn.nextInt();
                        deleteIndex(head, index);
                        break;
                    case 7:
                        reverse(head);
                        break;
                    case 8:
                        print(head);
                        break;
                    case 9:
                        System.out.println("enter the index number: ");
                        index = scn.nextInt();
                        printIndex(head, index);
                    case 10:
                        System.out.println("enter the number of elements your want to insert: ");
                        int n = scn.nextInt();
                        for(int i = 0; i < n; i++){
                            System.out.println("enter the element for " + i + " index");
                            data = scn.nextInt();
                            insertEnd(head, data);
                        }
                        break;
                    default:
                        System.out.println("sorry wrong input, try again: ");
                        break;
                }
                int flag = 1;
                while(true){
                    System.out.println("\npress 0 to try again: ");
                    System.out.println("press any other key to exit: ");
                    flag = scn.nextInt();
                    if(flag == 0){
                        break;
                    }
                    else{
                        System.out.println("Thank You Have A Nice Day: ");
                        return;
                    }
                }
            }
            System.out.print("\033[H\033[2J");
            System.out.flush();
            scn.close();
        }
        catch (Exception e){
            System.out.println("some error occured but never mind");
        }
    }
}