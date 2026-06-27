#include<stdio.h>
int max_element(int *ptr)
{
	int i;
	int max;
	max=*ptr;
	for(i=0;i<10;i++)
	{
		if (max<*(ptr+i))
			max=*(ptr+i);
	}
	return max;
	
}
int main()
{
	printf("----MAX VALUE----\n\n");
	int numbers[10]={8,6,4,2,1,3,5,7,9,21};
	int *ptr=numbers;
	int result=max_element(ptr);
	printf("The maximum value: %d",result);
	return 0;
}
