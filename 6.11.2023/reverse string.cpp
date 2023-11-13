#include <stdio.h>
int main()
{
	int i=0,x=0,j=0;
    char str1[1000],str2[1000]; 
    printf("Enter the string");
    scanf("%s", str1);
    while(str1[i]!='\0')
    {
    x++;
    i++;
	}
    i=x-1;
	while(i>=0)
	{
		str2[j]=str1[i];
		i--;
		j++;
	}  
	printf("The reversed string is %s",str2);
    return 0;
}
