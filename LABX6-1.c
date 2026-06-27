	#include<stdio.h>
	#include<stdlib.h>
	#define maxsize 10
	
	int list[maxsize],n;
	
	//create operation - used to create list with n number of elements 
	void create()
	{
		int i;
		printf("\nEnter the number of elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("\nEnter array elements: ");
			scanf("%d",&list[i]);
		}
	}
	
	//insert operation - used to insert an element in a particular position in the existing list
	void insert()
	{
		int i,data,position;
		printf("\nEnter the data to be inserted: ");
		scanf("%d",&data);
		printf("\nEnter the position at which element is to be inserted: ");
		scanf("%d",&position);
		if(position < 1 || position > n+1)
			{
    			printf("Invalid position!");
    			return;
			}
		if(n==maxsize)
		{
			printf("array overflow!");
			return;
	    }
		for(i=n-1;i>=position-1;i--)
			list[i+1]=list[i];
		list[position-1]=data;
		n=n+1;
		display();
	}
	
	//delete operation - remove an element from array at any position
	void DeleteElement()
	{
		if(n==0)
		{
    		printf("List is empty!\n");
    		return;
		}
		int i,position;
		printf("Enter the position of the data to be deleted: ");
		scanf("%d",&position);
		printf("The data deleted is : %d", list[position-1]);
		if(position<1||position>n)
		{
    		printf("Invalid position!");
    		return;
		}
		for(i=position-1;i<n-1;i++)
			list[i]=list[i+1];
		n=n-1;
		display();	
	}
	
	//display operation - used to display the elements of the list
	
	void display()
	{
		int i;
		for(i=0;i<n;i++)
			printf("%d\t",list[i]);
	}
	
	//search operation - used to search an element in the array
	
	void search()
	{
		if(n==0)
		{
    		printf("List is empty!\n");
    		return;
		}
		int i,search,count=0;
		printf("Enter the element to be searched: ");
		scanf("%d",&search);
		for(i=0;i<n;i++)
		{
			if(list[i]==search)
				count+=1;
		}
		if(count==0)
			printf("Element is not present in the list");
		else
			printf("Element is present in the list");
	}
	
	int main()
	{
		int choice;
		while(1)
		{
			printf("\n------LIST ABSTRACT DATATYPE------\n");
			printf("\n1.Create list \n2.Insert element \n3.Delete element \n4.Search element \n5.Display list \n6.Exit");
			printf("\nEnter your choice(1/2/3/4/5/6):  ");
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					create();
					break;
				case 2:
					insert();
					break;
				case 3:
					DeleteElement();
					break;
				case 4:
					search();
					break;
				case 5:
					display();
					break;
				case 6:
					exit(0);
				default:
					printf("Enter valid number!!");
			}
		}
		return 0;	
	}
