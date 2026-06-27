#include <stdio.h>
#include <string.h>

int main()
{
	printf("----LIBRARY MANAGEMENT SYSTEM----\n\n");
    int n,i,j;
    char temp[100];
    
    printf("Enter number of books: ");
    scanf("%d",&n);
    getchar();  
    
    char books[n][100];
    
    printf("Enter book titles:\n");
    for(i=0;i<n;i++)
        fgets(books[i],sizeof(books[i]),stdin);
    
    for(i=0;i<n;i++)
    {
        size_t len=strlen(books[i]);
        if(len>0&&books[i][len-1]=='\n')
            books[i][len-1]='\0';
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(books[i],books[j])>0)
            {
                strcpy(temp,books[i]);
                strcpy(books[i],books[j]);
                strcpy(books[j],temp);
            }
        }
    }

    printf("\nBooks in alphabetical order:\n");
    for(i=0;i<n;i++)
        printf("%s\n",books[i]);

    return 0;
}
