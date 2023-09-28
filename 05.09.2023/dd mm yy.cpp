#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the date (in the format of dd mm yyyy)");
	scanf("%d %d %d", &d, &m, &y);
	if ((d==31 && (m==1||m==3||m==5||m==7||m==8||m==10))||(d==30 && (m==4||m==6||m==9||m==11))||((y%4==0 && (y%100!=0 || y%400==0)) && d==29 && m==2)||(y%4!=0 && d==28 && m==2))
	  printf("1 %d %d",m+1,y);
	else if (d==31 && m==12)
	  printf("1 1 %d",y+1);
	else if (((m==1||m==3||m==5||m==7||m==8||m==10) && 1<=d &&d<31)||((m==4||m==6||m==9||m==11)&& 1<=d &&d<30)||((y%4==0 &&(y%100!=0 || y%400==0)) && 1<=d&&d<29 && m==2)||(y%4!=0 && m==2 && 1<=d&&d<28))
	  printf("%d %d %d",d+1,m,y);
   else
     printf("Invalid input");
return 0;
}
