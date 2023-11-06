#include <stdio.h>
int main() 
{
    int n, i, j, x = 0;
    printf("Enter the length of the array");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values in the array");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++) 
    {
        x=0;
        for (j = 0; j < n; j++) 
        {
            if (i!=j && a[i] == a[j]) 
            {
                x = 1;
                break;
            }
        }
        if (x == 0) 
        {
            printf("%d is the first non-recurring value\n", a[i]);
            break;
        }
    }

    if (x == 1) 
        printf("All elements are recurring\n");
    return 0;
}
