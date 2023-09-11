#include<stdio.h>
int main()
{
	int u;
	float v,w,y;
	printf("Enter the number of units of current");
	scanf("%d", &u);
    if(u>=0 && u<=100)
    {
    	v=u*2;
	 printf("The bill costs %f",v);
	}
	else if (u>100 && u<=250)
	{
	 w=u*3.5;
	 printf("The bill costs %f",w);	
	}
	else 
	{
 	 y=u*5;
	 printf("The bill costs %f",y);	
	}
	return 0;
}
