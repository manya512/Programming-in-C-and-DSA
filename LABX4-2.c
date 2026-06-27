#include <stdio.h>
#include <string.h>

char* getdomain(char *email)
{
    char *ptr;
    ptr=strchr(email,'@');
    if (ptr!=NULL)
        return ptr+1;
    else
        return NULL;
}

int main()
{
	printf("-----DOMAIN NAME EXTRACTOR-----\n\n");
    char email[100];
    char *domain;
    printf("Enter email: ");
    scanf("%s",email);
    domain=getdomain(email);
    if(domain!=NULL)
        printf("Domain: %s",domain);
    else
        printf("Invalid email");

    return 0;
}
