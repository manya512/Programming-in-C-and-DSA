#include<stdio.h>
struct student{
	char name[50];
	int marks;
	int rollno;
	char grade;
};
int main()
{
	printf("---Student Management System---\n\n");
	int n,i;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter name: ");
		getchar();
		fgets(s[i].name,50,stdin);
		printf("Enter roll no.: ");
		scanf("%d",&s[i].rollno);
		printf("Enter marks: ");
		scanf("%d",&s[i].marks);
		if(s[i].marks>=90)
			s[i].grade='A';
		else if(s[i].marks>=80 && s[i].marks<90)
			s[i].grade='B';
		else if(s[i].marks>=70 && s[i].marks<80)
			s[i].grade='C';
		else if(s[i].marks>=60 && s[i].marks<70)
			s[i].grade='D';
		else
			s[i].grade='F';
	}
	printf("\n---STUDENT DETAILS---\n");
	for(i=0;i<n;i++)
	{
		printf("NAME: %s",s[i].name);
		printf("ROLL NO.: %d\n",s[i].rollno);
		printf("MARKS: %d\n",s[i].marks);
		printf("GRADE: %c\n",s[i].grade);
	}
	
}


