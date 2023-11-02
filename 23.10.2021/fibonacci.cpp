#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("Enter a number");
	scanf("%d", &n);
	if(n==1)
	printf("0");
	else if(n==2)
	printf("1");
	else
	{
		a=0;
		b=1;
		for(int i=0;i<n-2;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d", c);
	}	
	return 0;
}
