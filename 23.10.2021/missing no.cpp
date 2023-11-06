#include<stdio.h>
int main()
{
    int n,i,k,x,y;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    x=(n+1)*(n+2)/2;
    y=0;
    for(i=0;i<n;i++)
    {
       y=y+a[i];
    }
    k=x-y;
    printf("The missing number is %d",k);
    return 0;
}
