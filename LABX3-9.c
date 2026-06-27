#include<stdio.h>
#include<math.h>
int main()
{
	printf("=====FINDING LARGEST AREA=====\n\n");
	float t[6][3]={{137.4,80.9,0.78},{155.2,92.62,0.89},{149.3,97.93,1.35},{160.0,100.25,9.00},{155.6,68.95,1.25},{149.7,120.0,1.75}};
  	int i,j=0;
  	float area[6];
  	for(i=0;i<6;i++)
  	{
  	  	area[i]=0.5*t[i][j]*t[i][j+1]*sin(t[i][j+2]);	 
	}
	int maxIndex;
	float max=area[0];
	for(i=1;i<6;i++)
	{
		if (max<area[i])
		{
			max=area[i];
			maxIndex=i;
	    }
	}
	printf("The largest area is plot no.%d",maxIndex+1);
	
}
