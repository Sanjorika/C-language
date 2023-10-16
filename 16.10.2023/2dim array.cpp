# include<stdio.h>
int main()
{
	int i,j,m,n;
	printf("The number of rows is\n");
	scanf("%d",&m);
	printf("The number of columns is\n");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter the values of array\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		 scanf("%d", &a[i][j]);
		 printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
