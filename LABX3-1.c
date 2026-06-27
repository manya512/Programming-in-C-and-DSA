#include<stdio.h>
void count(int matrix[3][5])
{
	int i,j;
	int even=0,odd=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			if(matrix[i][j]%2==0)
			even++;
			else
			odd++;	
		}
	}
	printf("EVEN NUMBERS: %d\n",even);
	printf("ODD NUMBERS: %d",odd);	

}
int main()
{
	printf("====COUNT ODD&EVEN IN 2D ARRAYS====\n\n");
	int mat[3][5];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter number for position[%d][%d]:",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	count(mat);


	return 0;
}

