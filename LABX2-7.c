#include<stdio.h>
int main()
{
	printf("====FIND THE NUMBER IN THE ARRAY====\n\n");
	int arr[25],number,found=0,i;
	for(i=0;i<25;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
	printf("Enter number to be searched: ");
	scanf("%d",&number);
	for(i=0;i<25;i++)
	{
		if (arr[i]==number)
			found++;
	}
	if(found==0)
		printf("Number not found!");
	else
		printf("%d appears %d time(s) in the array.",number,found);
	return 0;
}

