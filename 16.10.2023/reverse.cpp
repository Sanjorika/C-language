#include<stdio.h>
int main()
{
    int n,i,j,x,t;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
