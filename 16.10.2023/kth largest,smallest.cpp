#include<stdio.h>
int main()
{
    int n,i,j,k,t;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter a number");
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("%d is the %d-th smallest and %d-th is the %d largest",a[k-1],k,a[n-k],k);
    return 0;
}
