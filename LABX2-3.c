#include<stdio.h>
#include<math.h>
int fact(int a)
{
	if(a==0 || a==1)
		return 1;
	else
		return a*fact(a-1);
}

float series(float n)
{    
	int i,temp=1;
	float sum=0;a
	for(i=1;i<=10;i+=2)
	{
		sum+=temp*(pow(n,i)/fact(i));
		temp=-temp;
	}
	return sum;
}
int main()
{
	printf("=====TAYLOR SERIES=====\n\n");
	float a;
	printf("Enter value of x in sin(x):");
	scanf("%f",&a);
	a = a*(M_PI/180);
	float value=series(a);
	printf("sin(%.2f)= %.4f",a*(180/M_PI),value);
	return 0;
}
