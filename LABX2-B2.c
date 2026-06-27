#include <stdio.h>
void Roman(int year)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40,10, 9, 5, 4, 1};
    char *symbols[] = {"m", "cm", "d", "cd", "c", "xc", "l", "xl","x", "ix", "v", "iv", "i"};
    int i;
    for(i=0;i<13;i++)
    {
        while(year>=values[i])
        {
            printf("%s",symbols[i]);
            year-=values[i];
        }
    }
}
int main()
{
    int year;
    printf("====ROMAN YEAR CONVERTOR====\n\n");
    printf("Enter year: ");
    scanf("%d",&year);
    printf("Roman equivalent: ");
    Roman(year);
    return 0;
}

