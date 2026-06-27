#include <stdio.h>
void bs(int a[],int n) 
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(a[j]<a[j+1])
			{
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

int runner(int a[], int n) 
{
    bs(a,n);
    return a[1];
}

int main() 
{
	printf("=====RUNNER UP FINDER=====\n\n");
    int x, i;
    printf("Enter number of teams: ");
    scanf("%d",&x);
    int s[x];
    for(i=0;i<x;i++) 
	{
        printf("Enter score of team %d: ", i+1);
        scanf("%d",&s[i]);
    }
    printf("Runner-up score: %d\n",runner(s, x));
    return 0;
}
