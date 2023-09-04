#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf ("Enter the kilometer");
	scanf ("%d", &a);
	b=a*1000;
	printf ("The given kilometer is %d m\n", b);
	c=b*100;
	printf("The given kilometer is %d cm\n", c);
	d=c*10;
	printf("The given kilometer is %d mm\n", d);
	return 0;
}
