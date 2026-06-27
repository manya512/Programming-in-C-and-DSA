#include<stdio.h>

int add(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	if(i%3==0 || i%5==0)
	{
		sum+=i;
	}
	return sum;
}

int main()
{
	printf("=====MULTIPLES OF 3 & 5=====\n\n");
	int number;
	printf("Enter limit:");	
	scanf("%d",&number);
	int result=add(number);	
	printf("Total sum: %d",result);	
	return 0;
}
