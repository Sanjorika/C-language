#include<stdio.h>
int main()
{
    int i,j,n;
    int x=1;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x++;
        }    
        printf("\n");
    }
    return 0;
}
