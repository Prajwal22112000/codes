//write a program of queue of array
#include <stdio.h>
#include <stdlib.h>
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
	while(1)
	{
		printf("\npress\n1 to insert\n2 to delete\n3 to display\n4 to exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : insert();
			break;
			case 2: delet();
			break;
			case 3:	display();
			break;
			case 4: exit(0);
			break;
			default : printf("wrong input\n");
			break;
		}
	}
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
	return;
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty \n");
	}
	else
	{
		printf("elements in queue\n");
		for(i=front;i<=rear;i++)
		{
			
			printf("%d \n",queue[i]);
		}
	}
	return;
}