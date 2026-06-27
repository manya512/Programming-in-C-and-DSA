#include<stdio.h>
int bin(int num)
{ 
	if(num==0)
	return 0;
	else
	return (num%2)+10*bin(num/2);
}
int main()
{
	printf("=====BINARY CONVERSION=====\n\n");
	int number,binary;
	printf("Enter the number: ");
	scanf("%d",&number);
	binary=bin(number);
	printf("The binary equivalent of the given number is %d",binary);
	return 0;
}

