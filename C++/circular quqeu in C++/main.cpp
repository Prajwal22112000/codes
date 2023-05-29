#include <iostream>
using namespace std;

int s, *q, f = -1, r = -1, maxsize;
int n;

void enter();
void del();
void display();

int main()
{
    cout<<"enter the size of your circular queue"<<endl;
    cin>>maxsize;
    q = new int[maxsize];

    while(1){
        printf("\n\tf = %d\tr = %d\n", f, r);

        printf("\npress\n");
        printf("1 to enter the new number\n");
        printf("2 to delete the number\n");
        printf("3 to display the numbers\n");
        printf("4 to exit\n");
        cin>>n;

        switch(n){
            case 1: enter();
            break;
            case 2: del();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("wrong input try again\n");
            }
        }
    return 0;
}


void enter(){
    int x;

    if(r == -1){
        r = f = 0;
    }else if(f == (r + 1)%maxsize){
        printf("queue is full cannot enter more elements\n");
        return;
    }else{
        r = (r+1)%maxsize;
    }
    printf("enter the element that you want to insert\n");
    cin>>q[r];
    printf("\ninserted\n");
}


void del(){
    if (r == -1){
        printf("\nthe queue is already empty just like my heart\n");
    }else if (r == f){
        f = r = -1;
        printf("\ndeleted just like feelings for her in my heart\n");
    }else{
        f = (f + 1)%maxsize;
        printf("\ndeleted just like feelings for her in my heart\n");
    }
}


void display(){
    int i;
    i = f;
    if(i == -1){
        printf("queue is empty just like my ykw");
    }
    else{
        printf("the numbers are\n");
        while(1){
            printf("%d\n", q[i]);
            if(i == r){
                break;
            }
            i = (i + 1)%maxsize;
        }
    }
}
