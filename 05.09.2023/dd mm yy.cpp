#include<stdio.h>
int main()
{
	int d,m,y,a;
	printf("Enter the date(in the format of dd mm yy)");
	scanf("%d %d %d", &d, &m, &y);
	if ((d==31 && (m==1||m=3||m==5||m==7||m==8||m==10))||(d==30 && (m==4||m==6||m==9||m==11)))
	 {
	 	a=m+1;
	 	printf("1 %d %d",a,y);
	 }
	else if((y%4==0 && (y%100!=0 || y%400==0)) && d==29 && m==2)
	{
		
	}

}
