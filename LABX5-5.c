#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp;
    char text[100];
    fp=fopen("example.txt","w");
    if(fp==NULL)
	{
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter a line of text: ");
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp); 
    fp=fopen("example.txt", "r");
    if(fp==NULL)
	{
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nContent of the file:\n");
    while(fgets(text,sizeof(text),fp)!=NULL)
	{
        printf("%s",text);
    }
    fclose(fp);
    return 0;
}
