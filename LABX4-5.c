#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("-----SUPERMARKET PRODUCT DETAILS-----\n\n");
    int *prices;
    int capacity=2,count=0,i;
    char choice;
    prices=(int *)malloc(capacity*sizeof(int));
    if(prices==NULL) return 1;
    while(1){
        int price;
        printf("Enter product price: ");
        scanf("%d",&price);
        if(count==capacity) {
            capacity*=2;
            prices=(int *)realloc(prices,capacity*sizeof(int));
            if(prices==NULL) return 1;
        }
        prices[count++]=price;
        printf("Add another product? (y/n): ");
        scanf(" %c",&choice);
        if (choice=='n' || choice=='N') break;
    }
    printf("\nProduct Prices:\n");
    for(i=0;i<count;i++)
        printf("%d ",prices[i]);
    printf("\n");
    free(prices);
    return 0;
}
