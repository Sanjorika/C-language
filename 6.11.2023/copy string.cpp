#include <stdio.h>
int main()
{
	int i=0;
    char str1[1000],str2[1000]; 
    printf("Enter the string-1");
    scanf("%s", str1);
    printf("Enter the string-2");
    scanf("%s", str2);
    while(str1[i]!='\0')
    {
    	str2[i]=str1[i];
    	i++;
    }
    str2[i]='\0';
    printf("%s is the copied string",str2);
    return 0;
}
