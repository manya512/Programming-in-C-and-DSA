#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library{
    int ID;
    char title[30];
    float price;
};

int main() 
{
    printf("-----LIBRARY MANAGEMENT SYSTEM-----\n\n");
    int n=0,choice,i,found;
    struct library*l=NULL;
    while(1) 
	{
        printf("\nMENU\n");
        printf("1. Add books\n");
        printf("2. Display books\n");
        printf("3. Update price\n");
        printf("4. Exit\n");
        printf("Enter your choice (1/2/3/4): ");
        scanf("%d",&choice);
        if (choice == 1) {
            free(l);
            printf("Enter number of books: ");
            scanf("%d",&n);
            l=(struct library*)malloc(n*sizeof(struct library));
            for (i=0;i<n;i++)
			{
                printf("\nBook %d\n",i+1);
                printf("Enter Book ID: ");
                scanf("%d", &l[i].ID);
                printf("Enter Title: ");
                getchar();
                fgets(l[i].title,30,stdin);
                l[i].title[strcspn(l[i].title,"\n")] ='\0';
                printf("Enter Price: ");
                while (scanf("%f", &l[i].price) != 1)
				{
                    printf("Invalid input! Enter numeric value: ");
                    while (getchar()!='\n'); 
                }
            }
        }
        else if (choice==2) 
		{
            if (l == NULL)
                printf("No records found!\n");
            else
			{
                printf("\n-----Book Records-----\n");
                for(i=0;i<n;i++) 
				{
                    printf("\nBook ID: %d", l[i].ID);
                    printf("\nTitle: %s", l[i].title);
                    printf("\nPrice: %.2f\n", l[i].price);
                }
            }
        }
        else if(choice==3) 
		{
            if(l==NULL)
		        printf("No records to update!\n");
             else 
			{
                int id;
                float newPrice;
                found=0 ;
                printf("Enter Book ID to update: ");
                scanf("%d",&id);
                for (i=0;i<n;i++) 
				{
                    if(l[i].ID==id) 
					{
                        printf("Enter new price: ");
                        scanf("%f",&newPrice);
                        l[i].price=newPrice;
                        found=1;
                        printf("Price updated successfully!\n");
                        break;
                    }
                }
                if(!found) 
				{
                    printf("Book ID not found!\n");
                }
            }
        }
        else if(choice==4) 
		{
            free(l);
            printf("Exiting program...\n");
            break;
        }
        else 
            printf("Invalid choice!\n");
    }
    return 0;
}
