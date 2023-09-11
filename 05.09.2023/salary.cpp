#include<stdio.h>
int main()
{
	int a, t;
	float x,y,z;
	printf ("Enter basic salary and city tier");
	scanf("%d %d",&a,&t);
	x=44/100*a;
	if (t==1)
	 {
	    y= 12*a/100;
	    z= a+x+y;
	    printf("The total salary is %f", z);
	 }
	else if (t==2)
	{
		 y= 14*a/100;
		 z= a+x+y;
		printf("The total salary is %f", z);
	}
	else
	{
		 y=16*a/100;
		 z=a+x+y;
		printf("The total salary is %f", z) ;
	}
	return 0;
}
