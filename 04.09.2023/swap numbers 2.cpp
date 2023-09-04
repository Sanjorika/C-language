#include<stdio.h>
int main()
{
	int a,b;
	printf ("Enter two numbers");
	scanf ("%d %d",&a, &b);
	a=a+b-a;
	b=a+b-b;
	printf ("The interchanged numbers are %d %d", a, b);
	return 0;
}
