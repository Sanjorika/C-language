#include<stdio.h>
int main()
{
    int n,i,j,x=0;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d is the first recurring value",a[i]);
                x=1;
                break;
            }
        }
        if (x==1)
        break;
    }
    if(x==0)
    printf("No element is recurring\n"); 
    return 0;
}
