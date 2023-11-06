#include<stdio.h>
int main()
{
  int x,n,binary=0,i=1;
  printf("Enter a number");
  scanf("%d", &n);
  x=n;
  while(n>0)
  {
    int rem=n%2;
    binary=binary+rem*i;
    n=n/2;
    i=i*10;
  }
  printf("The binary form of %d is %d",x,binary);
  return 0;
}
