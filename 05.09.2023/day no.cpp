#include<stdio.h>
int main()
{
	int d;
	printf("Enter the day number");
	scanf("%d", &d);
	if (d==1)
	 printf("The day is Monday");
	else if (d==2)
	 printf ("The day is Tuesday");
	else if (d==3)
	 printf("The day is Wednesday");
	else if (d==4)
	 printf("The day is Thursday");
	else if (d==5)
	 printf("The day is Friday");
	else if (d==6)
	 printf("The day is Saturday");
	else if (d==7)
	 printf("The day is Sunday");
	return 0;
}
