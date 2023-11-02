#include<stdio.h>
int main()
{
	int i,j,m,n,k,l,r,s;
	printf("The number of rows is\n");
	scanf("%d",&m);
	printf("The number of columns is\n");
	scanf("%d",&n);
	int a[m][n], b[m][n], c[m][n];
	printf("Enter the values of matrix 1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		 scanf("%d", &a[i][j]);
		 printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	printf("Enter the values of matrix 2\n");
	for(k=0;k<m;k++)
	{
		for(l=0;l<n;l++)
		{
		 scanf("%d", &b[k][l]);
		 printf("%d ", b[k][l]);
	    }
	    printf("\n");
	}
	c[m][n]=a[m][n]+b[m][n];
	for(r=0;r<m;r++)
	{
		for(s=0;s<n;s++)
		{
		 printf("%d ", c[r][s]);
	    }
	    printf("\n");
	}
	return 0;
}
