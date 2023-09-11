#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the lengths of sides of triangle");
	scanf("%d %d %d", &a, &b, &c);
	if (a==b && b==c)
	 printf("The triangle is equilateral");
	else if (a==b || b==c || c==a)
	 printf ("The triangle is isosceles");
	else
	 printf("The triangle is scalene");
	return 0;
}
