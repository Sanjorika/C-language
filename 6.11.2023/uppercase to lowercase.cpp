#include<stdio.h>
void convert(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] >= 'A' && str[i] <= 'Z') 
            str[i] = str[i] + 32;
    }
}
int main()
 {
    char x[1000];
    printf("Enter a string");
    scanf("%s", x);
    convert(x);
    printf("%s is the string in lowercase\n", x);
    return 0;
}
