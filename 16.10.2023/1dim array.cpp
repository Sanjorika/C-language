#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter the length of the array\n");
   scanf("%d", &n);
   int a[n];
   printf("Enter the values of the array\n"); 
   for(i=0;i<n;i++)
    {
     scanf("%d", &a[i]);	
   	printf("%d ", a[i]);
    }
   return 0;
}
