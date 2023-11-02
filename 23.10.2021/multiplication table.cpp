#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d", &n);
	for(int i=1;i<=100;i++)
	printf("%d x %d = %d\n", i, n,n*i);
	return 0;
}
