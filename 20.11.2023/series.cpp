#include<stdio.h>
int f(int n,int a,int b,int c)
{
	if(n==1)
		return a;
	else if(n==2)	
		return b;
	else if(n==3)
		return c;
	else
		return f(n-1,a,b,c) + f(n-2,a,b,c) + f(n-3,a,b,c);	
}
int f(int n,int a,int b,int c);
int main()
{
	int a,b,c,n;
	printf("Enter the first three terms");
	scanf("%d %d %d",&a,&b,&c);
	printf("Enter the position of term required");
	scanf("%d",&n);
	if(n!=1 && n!=2 && n!=3)
		f(n,a,b,c);
	printf("%d is the %dth term of the series",f(n,a,b,c),n);
	return 0;
}
