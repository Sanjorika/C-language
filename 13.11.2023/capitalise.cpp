#include<stdio.h>
int main()
{
	char str[1000]; 
    printf("Enter the string\n");
    scanf("%s", str);
    if(str[0]>='a' && str[0]<='z')
    {
    	str[0] = str[0] -32;
    printf("The new string is %s",str);
	}
	else
	printf("Invalid input");
	return 0;
}
