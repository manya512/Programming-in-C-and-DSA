
#include<stdio.h>
int checkthreefives(int number)
{
	int count=0;
	int digit;
	while(number!=0)
 	{
  		digit=number%10;
  		if (digit==5)
	  	{
		 	count++;
	  	 	if(count==3)
		   		return 1; }
	  	else 
	  		 count=0;
		number/=10;
    }
    return 0;
}

int main()
{
	printf("=====CHECK THREE FIVES=====\n\n");
	int num,result;
	printf("Enter number: ");
	scanf("%d",&num);
	result=checkthreefives(num);
	if(result==1)
		printf("1\n");
	else
		printf("0\n");
	return 0;		
}

