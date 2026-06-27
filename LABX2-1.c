#include<stdio.h>
	float vcube(float s)
	{
		return s*s*s;
	}
	
	float vcuboid(float l,b,h)
	{
		return l*b*h;
	}
	
	float vsphere(float r)
	{
		return (4/3)*(22/7)*r*r;
	}
	  
	float vcylinder(float r,h)
	{
		return 2*(22/7)*r*r;
	}
	
	float vcone(float r,h )
	{
		return (1/3)*(22/7)*r*r*h;
	}
	
void main()
{
	int choice;
	float s,l,b,h,r,volume;
	printf("1.Cube");
	printf("2.Cuboid");
	printf("3.Sphere");
	printf("4.Cylinder");
	printf("5.Cone");
	printf("Enter your choice(1/2/3/4/5):");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("Enter side:");
			scanf("%f",&side);
			volume=vcube(side);
			break;
		
		case 2:
			printf("Enter length:");
			scanf("%f",&l);
			printf("Enter breadth:");
			scanf("%f",&b);
			printf("Enter height:");
			scanf("%f",&h);
			volume=vcuboid(l,b,h);
			break;
			
		case 3:
			printf("Enter radius:");
			scanf("%f",&r);
			volume=vsphere(r);
			break;
			
		case 4:
			printf("Enter radius:")
			printf("Enter height:")
			
		case 5:
			printf("Enter")
	}
	
	
}
