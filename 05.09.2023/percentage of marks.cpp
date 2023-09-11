#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf ("Enter the repsective marks of 5 subjects");
	scanf ("%d %d %d %d %d",&a, &b, &c, &d, &e);
	f = a+b+c+d+e;
	g = f/5;
	if (g>= 90)
	 printf ("A grade");
	else if (g>=80)
	 printf("B grade");
	else if (g>=70)
	 printf("C grade");
	else if (g>=60)
	 printf("D grade");
	else if(g>=40)
	 printf("E grade");
	else 
	 printf("F grade");
	return 0;
}
