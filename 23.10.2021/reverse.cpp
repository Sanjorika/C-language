#include<stdio.h>
int main()
{
	int n,x;
	int c=0;
	printf("Enter the number");
	scanf("%d", &n);
	x=n;
	while(n>0)
	{
		c=c*10+n%10;
		n/=10;
	}
	printf("The reverse of %d is %d", x, c);
	return 0;
}
