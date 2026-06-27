#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr;
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
 	}
 	
 	int sum=0;
 	for(i=0;i<n;i++)
 		sum=sum+arr[i];
 	
 	printf("\nSum = %d",sum);
 	
 	return 0;
}
