#include<stdio.h>
void maximum(float temp[],int n)
{
	float max=temp[0];
	int i;	
	for(i=0;i<n;i++)
	{
		if(max<temp[i])
			max=temp[i];
	}
	printf("Maximum temperature:%.1f",max);	
}
void minimum(float temp[],int n)
{
	float min=temp[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(min>temp[i])
			min=temp[i];
	}
		printf("\nMinimum temperature:%.1f",min);
}
int main()
{
	printf("=====MAXIMUM & MINIMUM TEMPERATURE=====\n\n");
	float temp[30],max,min;
	int days,i;
	printf("Enter number of days:");
	scanf("%d",&days);
	for(i=1;i<=days;i++)
	{
		printf("day %d:",i);
		scanf("%f",&temp[i-1]);
	}
	maximum(temp,days);
	minimum(temp,days);
	return 0;
	
}
