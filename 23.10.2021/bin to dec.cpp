#include<stdio.h>
#include<math.h>
int main()
{
  int n,x,dec=0,i=0;
  printf("Enter a number");
  scanf("%d",&n);
  x=n;
  while(n>0)
  {
    int rem=n%10;
    dec=dec+rem*pow(2,i);
    i++;
  }
  printf("The decimal form of %d is %d",x,dec);
  return 0;
}
