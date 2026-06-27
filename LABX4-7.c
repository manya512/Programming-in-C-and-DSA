#include <stdio.h>
#include <stdlib.h>

int main()
{	
	printf("-----E-COMMERCE APPLICATION-----\n\n");
    int customers,i,j;
    printf("Enter number of customers: ");
    scanf("%d",&customers);
    float *purchase[customers];
    int items[customers];
    for(i=0;i<customers;i++)
    {
        printf("\nEnter number of items purchased by customer %d: ",i+1);
        scanf("%d",&items[i]);
        purchase[i]=(float *)malloc(items[i]*sizeof(float));
        printf("Enter price of %d items:\n",items[i]);
        for(j=0;j<items[i];j++)
        {
            scanf("%f",&purchase[i][j]);
        }
    }
    for(i=0;i<customers;i++)
    {
        float total = 0;
        for(j=0;j<items[i];j++)
        {
            total+=purchase[i][j];
        }
        printf("Total purchase amount for customer %d = %.2f\n",i+1,total);
    }
    for(i=0;i<customers;i++)
    {
        free(purchase[i]);
    }
    return 0;
}

