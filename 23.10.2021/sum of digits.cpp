#include<stdio.h>
int main()
{
    int n,x;
    int sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    x=n;
    while(n!=0)
    {
        sum=sum+n%10;
        n/=10;
    }
    printf("%d is the sum of digits of %d", &sum,n);
    return 0;
}
