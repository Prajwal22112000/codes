//write a program of queue of array
#include<stdio.h>
# define maxsize 10
int rear=-1,front=-1;
int queue[maxsize];
void insert();
void delet();
void display();
int i;
int main()
{
	int choice, c;
	do
	{
	printf("enter the choice for 1 insert , 2 delete and 3 display \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : insert();
		break;
		case 2: delet();
		break;
		case 3:	display();
		break;
		default : printf("choice is wrong");
	}
	printf("do you continue enter 1 else enter 2   \t");
	scanf("%d",&c);
	}while(c==1);
}
void insert ()
{
	int item;
	if(rear==maxsize-1)
	{
		printf("queue is overflow \n");
	}
	else if(rear==-1)
	{
	rear=0;
	front=0;
	printf("enter item \n");
	scanf("%d",&item);
	queue[rear]=item;
	
	}
	else
	{
	rear=rear+1;
	printf("enter item \n");
	scanf("%d",&item);
	queue[rear]=item;
	
    }
}
void delet ()
{
	if(front==-1)
	{
		printf("queue is underflow/empty \n");
	}
	else if(front==rear)
	{
		rear=-1;
		front=-1;
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty \n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("display the queue \t");
			printf("%d \n",queue[i]);
		}
	 } 
}