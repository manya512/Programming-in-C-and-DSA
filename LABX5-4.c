#include<stdio.h>
#include<string.h>
union student{
    int rollno;
    char name[50];
};
int main()
{
    union student s;
    int choice;
    printf("----Student Record System----\n");
    printf("1. Enter Roll Number\n");
    printf("2. Enter Name\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Enter Roll Number: ");
        scanf("%d",&s.rollno);
        printf("\n---Student Details---\n");
        printf("Roll Number: %d\n",s.rollno);
    }
    else if(choice == 2)
    {
        printf("Enter Name: ");
        
        fgets(s.name,50,stdin);
        printf("\n---Student Details---\n");
        printf("Name: %s",s.name);
    }
    else
        printf("Invalid choice!\n");
    return 0;
}


