#include<stdio.h>
int main()
{
	printf("Enter three numbers");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	 printf("%d is greatest", a);
	else if (b>a && b>c)
	 printf("%d is greatest", b);
	else
	 printf("%d is greatest", c);
	return 0; 
}
