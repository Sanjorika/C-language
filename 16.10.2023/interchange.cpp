#include<stdio.h>
int main()
{
    int n,i,t;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i=i+2)
    {
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
