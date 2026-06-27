#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter number of rows: ");
	scanf("%d",&r);
	printf("Enter number of columns: ");
	scanf("%d",&c);
	
	int arr[r][c];
	
	int i,j;
	
	printf("\n-----Enter elements-----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("element[%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("The matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	
	printf("\nTranspose:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",arr[j][i]);
		printf("\n");
	}
	
	return 0;
}
