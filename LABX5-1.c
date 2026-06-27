#include<stdio.h>
#include<string.h>

struct patient{
	char name[40];
	int age;
	char symptom[100];
	char condition[20];
};
int main()
{
	printf("----Hospital Management System----\n\n");
	struct patient p;
	printf("Enter name: ");
	fgets(p.name,40,stdin);
	printf("Enter age: ");
	scanf("%d",&p.age);
	getchar();
	printf("Enter symptoms: ");
	fgets(p.symptom,100,stdin);
    if(strstr(p.symptom,"cold") && strstr(p.symptom,"cough") && strstr(p.symptom,"body pain"))
        strcpy(p.condition,"Fever");
    else if(strstr(p.symptom,"cold") && strstr(p.symptom,"cough"))
        strcpy(p.condition,"Flu");
	printf("\n--- Patient Record---\n");
	printf("Name: %s",p.name);
	printf("Age: %d\n",p.age);
	printf("Symptoms: %s",p.symptom);
	printf("Condition: %s",p.condition);
	
	return 0;	
}


