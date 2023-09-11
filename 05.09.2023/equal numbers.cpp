#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers");
	scanf("%d %d %d", &a,&b,&c);
	if (a==b && b==c)
	 printf("The three numbers are equal");
	else
	 printf("The three numbers aren't equal");
	return 0;
}
