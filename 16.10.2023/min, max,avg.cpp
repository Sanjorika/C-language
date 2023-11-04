#include <stdio.h>
int main() 
{
  int x, n, i, min, max, sum;
  printf("Enter the length of the array");
  scanf("%d", &n);
  int a[n];
  min = a[0],max=a[0],sum=0;
  printf("Enter the values in the array\n");
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &a[i]);
    if (a[i] < min) 
      min = a[i];
    if (a[i] > max) 
      max = a[i];
    sum = sum + a[i];
  }
  x = sum / n; 
  printf("%d is the minimum\n", min);
  printf("%d is the maximum\n", max);
  printf("%d is the average\n", x);
  return 0;
}
