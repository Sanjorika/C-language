#include <stdio.h>
int main()
{
	int a,b, t;
	printf ("Enter two numbers");
	scanf ("%d %d", &a, &b);
	t=a;
	a=b;
	b=t;
	printf ("The interchanged numbers are %d %d", a,b);
	return 0;
}
