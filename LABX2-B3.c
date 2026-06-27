#include<stdio.h>
void bill(int price[],int quantity[],int subtotal[],int item)
{
	int i=0;
	int total=0;
	while(i<item)
	{
		total+=subtotal[i];    //write as function TT
		i++;
	}
	int discount;
	if(total<1000)
	discount=5;
	else if(1000<total && total<5000)
	discount=10;
	else if(total>5000)
	discount=15;
	printf("----------------------------------------\n");
	printf("ITEM      PRICE   QUANTITY   SUBTOTAL\n");
	printf("----------------------------------------\n");
	i=0;
	while(i<item)
	{
		printf("ITEM %d     %d        %d         %d \n",i+1,price[i],quantity[i],subtotal[i]);
		i++;
	}
	printf("----------------------------------------\n");
	printf("TOTAL                          %d \n",total);
	printf("DISCOUNT %d%%  %d\n",discount,total/discount);
	printf("----------------------------------------\n");
	printf("GRAND TOTAL %d",total-(total/discount));
}
int main()
{
	printf("=====BILL CALCULATOR=====\n\n");
	int item;
	printf("Enter number of items in list: ");
	scanf("%d",&item);
	int price[item],quantity[item],subtotal[item];
	int i=0;
	printf("PRICES: \n");
	while(i<item)
	{
		printf("Item %d: ",i+1);
		scanf("%d",&price[i]);
		i++;
	}
	i=0;
	printf("QUANTITY: \n");
	while(i<item)
	{
		printf("Item %d: ",i+1);
		scanf("%d",&quantity[i]);
		subtotal[i]=price[i]*quantity[i];
		i++;
	}
	bill(price,quantity,subtotal,item);

	return 0;
}
