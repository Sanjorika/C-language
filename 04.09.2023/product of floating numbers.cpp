#include<stdio.h>
int main()
{
	float a, b, c;
	int d;
	printf ("Enter two numbers");
	scanf ("%f %f", &a, &b);
	c=a*b;
	d=a*b;
	printf ("The product of two numbers is %f, which is approximately %d", c, d);
	return 0;
}
