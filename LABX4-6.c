#include <stdio.h>
#include <stdlib.h>
int main() 
{
	printf("-----2-D ARRAY-----\n\n");
    int m,n,i,j,sum=0;
    int **arr;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&m,&n);
    arr=(int **)malloc(m*sizeof(int *));
    for(i=0;i<m;i++)
        arr[i] =(int*)calloc(n,sizeof(int)); 
    printf("Enter array elements:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",*(arr+i)+j);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            sum+= *(*(arr+i)+j);
    printf("Sum of array elements: %d\n",sum);
    for(i=0;i<m;i++)
        free(arr[i]);
    free(arr);
    return 0;
}
