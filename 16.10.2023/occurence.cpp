#include<stdio.h>
int main()
{
    int n,i,k,x=0;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter a number");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
       if(a[i]==k)
       x++;
    }
    printf("%d occurs %d times",k,x);
    return 0;
}
