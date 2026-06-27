#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *front=NULL;
struct node *rear=NULL;


void display()
{
	if(front==NULL)
		printf("Queue is empty!");
	else
	{
		struct node *temp;
		temp=front;
		printf("FRONT->");
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("REAR\n");
	}
}

void enqueue()
{
	struct node *newnode;
	int entry;
	
	printf("Enter data: ");
	scanf("%d",&entry);
	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=entry;
	newnode->next=NULL;
	
	if(front==NULL)
		front=rear=newnode;
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
	display();	
}

void dequeue()
{
	if(front==NULL)
		printf("Queue Underflow!");
	else
	{
		struct node *temp;
		temp=front;
		printf("Deleted: %d\n",front->data);
		front=front->next;
		if(front==NULL)
			rear=NULL;
		free(temp);	
		display();		
	}
}

void qfront()
{
	if(front==NULL)
		printf("Queue is empty!\n");
	else
		printf("First element: %d\n",front->data);
}

void isEmpty()
{
	if(front==NULL)
		printf("Queue is empty!\n");
	else
		printf("Queue is not empty!\n");
}

int main()
{
	int choice;
	printf("-----QUEUES USING LINKED LISTS-----\n\n");
	while(1)
	{
		printf("-----MENU-----\n");
		printf("1.Enqueue \n2.Dequeue \n3.Display \n4.Print first element \n5.Check if Empty \n6.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch (choice)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:qfront();break;
			case 5:isEmpty();break;
			case 6:printf("Exiting...");exit(0);
			default:printf("Enter valid choice\n");
		}		
	}
	return 0;
	
}
