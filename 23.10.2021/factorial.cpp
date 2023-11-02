#include<stdio.h>
int main()
{
	int prdct=1;
	int n;
	printf("Enter a number");
	scanf("%d", &n);
	for(int i=1; i<=n;i++)
	prdct=prdct*i;
	printf("The %d factorial is %d",n,prdct);
	return 0;
}
