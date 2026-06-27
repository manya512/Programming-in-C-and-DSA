#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *top=NULL;

void display()
{
	struct node *temp=top;
	printf("STACK: ");
	printf("TOP");
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void push(int a)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a;
	newnode->next=top;
	top=newnode;
	display();
}

void pop()
{
	if(top==NULL)
		printf("Stack is empty!\n");
	else
	{
		struct node *temp=top;
		printf("Deleted: %d\n",top->data);
		top=top->next;
		free(temp);
		display();
	}
}

void peek()
{
	if(top==NULL)
		printf("Stack is empty!\n");
	else
		printf("Top element: %d\n",top->data);
}

void isEmpty()
{
	if(top==NULL)
		printf("Stack is empty!!");
	else
		printf("Stack is not empty!!");
}

int main()
{
	int choice,x;
	printf("-----STACKS AS LINKED LISTS-----\n\n");
	while(1)
	{
		printf("--MENU--\n1.Push \n2.Pop \n3.Peek \n4.Check if Empty \n5.Display \n6.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter value to push: ");
				scanf("%d",&x);
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				isEmpty();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
			default:
				printf("Enter valid choice!!");
		}
	}
}
