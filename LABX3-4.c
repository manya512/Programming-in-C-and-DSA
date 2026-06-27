#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char c[50],l;
	int count=0,i;
	printf("Enter word: ");
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		l=tolower(c[i]);
		if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
		count+=1;
	}
	printf("\nNumber of vowels: %d",count);
	return 0;
}
