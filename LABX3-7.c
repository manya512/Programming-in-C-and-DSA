#include <stdio.h>
int length(char str[])
{
    int i=0;
    while(str[i]!='\0')
        i++;
    return i;
}

void copy(char dest[],char src[])
{
    int i=0;
    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
}

void concatenation(char dest[],char src[])
{
    int i=0,j=0;
    while(dest[i]!='\0')
        i++;
    while(src[j]!='\0')
    {
        dest[i]=src[j];
        i++;
        j++;
    }
    dest[i]='\0';
}

int compare(char str1[], char str2[])
{
    int i=0;
    while(str1[i]!='\0'&&str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
            return str1[i]-str2[i];
        i++;
    }
    return str1[i]-str2[i];
}

int character(char str[], char c)
{
    int i = 0;
    while(str[i]!='\0')
    {
        if(str[i]==c)
            return i;
        i++;
    }
    return-1;
}

int main()
{
    printf("=====STRING OPERATIONS WITHOUT BUILT-IN FUNCTIONS=====\n\n");
    char str1[50],str2[50],copi[50],concat[100],ch;
    int index;

	printf("Enter string1: ");
    scanf("%s",str1);
    printf("Enter string2: ");
    scanf("%s",str2);

    printf("\n---strlen---\n");
    printf("%d\n",length(str1));
    printf("%d\n",length(str2));
    
    printf("---strcpy---\n");
    copy(copi,str1);
    printf("%s\n",copi);
    
    printf("\n---strcat---\n");
    concatenation(concat,str1);
    concatenation(concat,str2);
    printf("%s\n",concat);

    printf("\n---strcmp---\n");
    int cmp=compare(str1,str2);
    if (cmp==0)
        printf("Strings are equal\n");
    else if(cmp<0)
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");
    
    printf("\n---strchr---\n");    
    scanf("%c",&ch);
    index=character(str1,ch);
    if (index!=-1)
        printf("%d\n",index);
    else
        printf("-1\n");

    return 0;
}
