#include <stdio.h>
#include <string.h>

int totalwords(char s[50])
{
    int i=0,count=0;

    while(s[i]!='\0')
    {
        if((s[i]!=' ' &&s[i]!='\n'&&s[i]!='\t') &&(s[i+1]==' '||s[i+1]=='\n'||s[i+1]=='\t'||s[i+1]=='\0'))
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    printf("=====WORD COUNTER=====\n\n");
    char sentence[50];
    printf("Enter the sentence: ");
    fgets(sentence,50,stdin);
    printf("Total number of words: %d",totalwords(sentence));
    return 0;
}
