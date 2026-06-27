#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack[MAX];
int top=-1;

//display all elements


void display()
{
	int i;
	printf("[");
	for(i=top;i>-1;i--)
		printf("%d ",stack[i]);				//complexity: O(n)
	printf("]\n");
}

//add an element to the top

void push()
{
	int x;
	printf("Enter element to push: ");
	scanf("%d",&x);
	if (top==(MAX-1))
		printf("Stack Overflow!!\n");			//complexity: O(1)	
	else
	{
		top+=1;
		stack[top]=x;
	}
	display();
}

//delete element form the top

void pop()
{
	if(top==-1)
		printf("Stack Underflow!\n");
	else
	{
		printf("Deleted: %d\n",stack[top]);			//complexity: O(1)
		top-=1;
	}
	display();
}

//print top element without deleting it

void peek()
{
	if(top==-1)
	 	printf("Stack is empty!\n");
	else
		printf("Top element: %d\n",stack[top]);		//complexity: O(1)
}

//check if stack is empty

void IsEmpty()
{
	if(top==-1)
		printf("Stack is empty!\n");
	else
		printf("Stack is not empty!\n");		//complexity: O(1)
}

//check if stack is full

void IsFull()
{
	if(top==MAX-1)
		printf("Stack is full!\n");
	else
		printf("Stack is not full!\n");		//complexity: O(1)
}

int main()
{
	printf("-----STACKS-----\n\n");
	int choice;
	while(1)
	{
		printf("---MENU---\n1.Push \n2.Pop \n3.Display \n4.Peek \n5.Check if empty \n6.Check if full \n7.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();break;
			case 4:peek();break;
			case 5:IsEmpty();break;
			case 6:IsFull();break;
			case 7:printf("Exiting...");exit(0);
			default:printf("Enter valid number!!");
		}
	}
}

