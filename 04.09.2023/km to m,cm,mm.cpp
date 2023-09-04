#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf ("Enter the kilometer");
	scanf ("%d", &a);
	b=a*1000;
	printf ("The given kilometer is %d m", b);
	c=b*100;
	printf("The given kilometer is %d cm", c);
	d=c*10;
	printf("The given kilometer is %d mm", d);
	return 0;
}
