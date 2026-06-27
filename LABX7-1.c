#include<stdio.h>
#include<stdlib.h>
 
#define MAX 10

int queue[MAX];
int front=-1,rear=-1;

//displaying all the elements

void display()
{
	int temp=front;
	printf("[");
	while(temp<=rear)
	{
		printf("%d ",queue[temp]);
		temp++;
	}
	printf("]\n");
}

//Check if queue is empty

void isEmpty()
{
	if(front==-1)
		printf("Queue is empty!\n");
	else
		printf("Queue is not empty!\n");
}

//check if queue is full

void isFull()
{
	if(rear==MAX-1)
		printf("Queue is full!!\n");
	else
		printf("Queue is not full!!\n");
}

//inserting at the rear

void enqueue()
{
	if(rear==MAX-1)
		printf("Queue is full!!\n");
	else
	{
		if(front==-1)
			front=0;
		int data;
		printf("Enter data: ");
		scanf("%d",&data);
		rear+=1;
		queue[rear]=data;	
	}
	display();
}

//deleting from the front

void dequeue()
{
	if(front==-1||front>rear)
		printf("Queue Underflow...\n");
	else
	{
		printf("Deleted: %d\n",queue[front]);
		front++;
	}
	display();
}

//printing front

void qfront()
{
	if(front==-1)
		printf("Queue is empty!\n");
	else
		printf("First element: %d\n",queue[front]);
} 

int main()
{
	int choice;
	printf("-----QUEUE USING ARRAYS-----\n\n");
	while(1)
	{
		printf("-----MENU-----\n");
		printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Print first element \n5.Check if Empty \n6.Check if full \n7.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:qfront();break;
			case 5:isEmpty();break;
			case 6:isFull();break;
			case 7:printf("Exiting...");exit(0);
			default:printf("Enter valid choice\n");
		}
			
	}
	return 0;
	
}
