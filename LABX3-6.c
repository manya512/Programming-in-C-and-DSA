#include<stdio.h>
#include<string.h>
void palindrome(char w1[],char w2[])
{
	int i=0;
	if(strcmp(w1,w2)==0)
	printf("It is a palindrome.");
	else
	printf("It is not a palindrome.");
	
}
int main()
{
	printf("=====PALINDROME CHECKER=====\n\n");
	char s1[25],s2[25];
	printf("Enter word: ");
	scanf("%s",s1);
	int i=0,j,t;
	j=strlen(s1);
	t=j-1;
	for(i;i<j;i++)
	{
		s2[i]=s1[t];
		t--;
			
	}
	s2[i]='\0';
	palindrome(s1,s2);
	return 0;
}
