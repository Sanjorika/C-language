#include<stdio.h>
int main()
{
	int n,s=0;
	printf("Enter the no. of elements of the array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers of the array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("%d is the average\n",s/n);
	return 0;
}
