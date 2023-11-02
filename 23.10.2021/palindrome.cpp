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
	if(x==c)
	printf("%d is a palindrome", x);
	else
	printf("%d isn't a palindrome", x);
	return 0;
}
