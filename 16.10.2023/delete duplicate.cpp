#include<stdio.h>
int main()
{
    int n,i,j,x;
    printf("Enter the length of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values in the array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        x=1;
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                x=0;
                break;
            }
        }
        if(x==1)
        printf("%d", a[i]);
    }
    return 0;
}
