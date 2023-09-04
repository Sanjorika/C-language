#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf ("Enter the repsective marks of 5 subjects");
	scanf ("%d %d %d %d %d",&a, &b, &c, &d, &e);
	f = a+b+c+d+e;
	g = f/5;
	printf ("The percentage of the student is %d %%", g);
	return 0;
}
