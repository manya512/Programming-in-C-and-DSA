#include<stdio.h>
int total(int m[7][4],int num)
{
	int i,sum=0;
	for(i=0;i<7;i++)
	{
		sum+=m[i][num];
	}
	return sum;
}
int main()
{
	int mat[7][4];
	int i,j;
	for(i=0;i<7;i++)
	{
		printf("Sales on Day %d:\n",i+1);
		for(j=0;j<4;j++)
		{
			printf("For product %d:",j+1);
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("----------TOTAL SALES----------");
	printf("\nPRODUCT 1: %d",total(mat,0));
	printf("\nPRODUCT 2: %d",total(mat,1));
	printf("\nPRODUCT 3: %d",total(mat,2));
	printf("\nPRODUCT 4: %d",total(mat,3));
	return 0;
	
}
