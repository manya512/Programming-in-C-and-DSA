#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	printf("-----URL SHORTENER-----\n\n");
    char *longurl;
    char shorturl[8];
    int i;
    longurl=(char *)malloc(100*sizeof(char));
    if(longurl==NULL)
        return 1;
    printf("Enter long URL: ");
    scanf("%s",longurl);
    for(i=0;i<7 && longurl[i]!='\0';i++)
        shorturl[i]=longurl[i];
    shorturl[i]='\0';
    printf("Shortened URL: %s\n",shorturl);
    free(longurl);
    return 0;
}
