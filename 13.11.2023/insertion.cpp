#include<stdio.h>
#include<string.h>
int main()
{
	int x,l;
    char c,r,y;
	char str[1000]; 
    printf("Enter the string\n");
    scanf("%s", str);
    printf("Enter the position\n");
    scanf("%d",&x);
    printf("Enter the character\n");
    scanf(" %c",&c);
    l=strlen(str);
    str[l+1]=str[l];
    if (x >= 0 && x <= l)
    {
    	for(int i=l;i>x;i--)
    		str[i]=str[i-1];
    	str[x]=c;
    	str[l+2]='\0';
    }
    else
    printf("Invalid position");
    return 0;
}
