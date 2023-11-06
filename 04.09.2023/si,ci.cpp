#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,a, b;
	printf("Enter the principal, time period and rate of interest");
	scanf("%d %d %d", &p, &t, &r);
	a=p*r*t/100;
	b=p*pow((1+(r/100)),t) - p;
	printf("The simple interest is %d\n", a);
	printf("The compound interest is %d\n", b);
	return 0;
}
