#include <stdio.h>
void mergeLists(int p1[], int n, int p2[], int m, int result[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
    	if(p1[i]<=p2[j])
        	result[k++]=p1[i++];
        else
        	result[k++] = p2[j++];
    }
    while(i<n)
    	result[k++]=p1[i++];
    while(j<m)
    	result[k++]=p2[j++];
}

int main()
{
	printf("=====Merging Two Lists=====\n\n");
	
    int n,m,i;
    printf("Enter number of products in list 1: ");
    scanf("%d", &n);
    printf("Enter number of products in list 2: ");
    scanf("%d", &m);
    int p1[n], p2[m];
    printf("Enter LIST 1 (sorted):\n");
    for(i=0;i<n;i++)
    {
        printf("Product %d: ",i+1); 
        scanf("%d",&p1[i]);
    }
    printf("Enter LIST 2 (sorted):\n");
    for(i=0;i<m;i++)
    {
        printf("Product %d: ",i+1);
        scanf("%d",&p2[i]);
    }
    int result[n+m];
    mergeLists(p1,n,p2,m,result);
    printf("\nMerged Sorted List:\n");
    for(i=0;i<n+m;i++)
        printf("%d ",result[i]);
    return 0;
}

