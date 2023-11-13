#include <stdio.h>
int main()
{
	int i=0,r=-1;
	char x;
    char str[1000]; 
    printf("Enter the string");
    scanf("%s", str);
    printf("Enter an element\n");
    scanf(" %c",&x);
    while(str[i]!='\0')
    {
    	if(str[i]==x)
    	{
    		r=i;
    		break;
    	}
    	i++;
	}
	if(r!=-1)
	printf("%d is the first ocuurence of %c\n",r,x);
	else
	printf("%c isn't found in the given string\n");
    return 0;
}
