#include<stdio.h>

int sum(int n)
{
	if(n==0)
		return 0;
	else
		return(n%10)+sum(n/10);
}
int main()
{
	printf("=====SUM OF DIGITS=====\n\n");
	int total,number;
	printf("Enter a 5-digit number: ");
	scanf("%d",&number);
	total=sum(number);
	printf("Total= %d",total);
	return 0;
}
