#include<stdio.h>
int main()
{
	int a,b,x;
	printf("Enter the number");
	scanf("%d", &a);
	x=a;
	b=0;
	while(a>0)
	{
		b++;
		a=a/10;
	}
	printf("The number %d has %d digits", x,b);
	return 0;
}
