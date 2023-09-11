#include<stdio.h>
int main()
{
	int m,y;
	printf("Enter the month and year");
	scanf("%d %d",&m, &y);
	if (m==1 || m==3 || m==5||m==7||m==8||m==10||m==12)
	 printf("31 days");
	else if (m==2)
	 {
		if(y%4==0 && (y%100!=0 || y%400==0))
		 printf("29 days");
		else
		 printf("28 days");
     }
    else
     printf("30 days");
    return 0;
}
 
