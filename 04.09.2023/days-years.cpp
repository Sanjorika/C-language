#include<stdio.h>
int main()
{
	float d;
	float y;
	printf("Enter the number of days");
	scanf("%f", &d);
	y=d/365;
	printf("%f days is the same as %f years",d,y);
	return 0;
}
