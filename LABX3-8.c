
#include<stdio.h>
void display(int s[10][10])
{
	int i,j;
	printf("\n\t1	2	3	4	5	6	7	8	9	10\n");
	for(i=0;i<10;i++)
	{
		printf("Row %d\t",i+1);
		for(j=0;j<10;j++)
		{
			printf("%d	",s[i][j]);
		}
		printf("\n");
	}
}
void book(int s[10][10])
{
	int i,j;
	while(1)
	{
		printf("\nEnter row number: ");
		scanf("%d",&i);
		printf("Enter seat number: ");
		scanf("%d",&j);
		if(i<1||i>10||j<1||j>10)
		{
			printf("Invalid seat number. Try again.\n");
			continue;
		}
		if(s[i-1][j-1]==0)
		{
			printf("Booking successful!\n");
			s[i-1][j-1]=1;
			break;
		}
		else
		{
			printf("Seat already booked.Pls enter again.\n");
		}
	}
}
int main()
{
	printf("=====BOOKING TICKETS=====\n\n");
	int seats[10][10]={{1,0,0,0,1,0,1,0,1,1},{1,0,1,0,1,0,1,0,0,0},{1,0,1,0,1,1,1,0,1,0},{1,0,1,0,0,1,0,1,0,0},{0,0,0,0,1,0,1,0,0,0},{0,1,1,0,0,0,1,0,1,0},{0,0,1,0,1,0,0,0,1,0},{1,0,0,0,1,0,1,0,0,1},{0,1,0,0,0,0,1,0,1,0}};
	printf("\nBefore booking:\n");
	display(seats);
	book(seats);
	printf("\nAfter booking:\n");
	display(seats);
	return 0;
}
