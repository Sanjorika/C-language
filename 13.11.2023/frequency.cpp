#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	printf("Enter the string");
	scanf("%s",str);
    int l=strlen(str);
    int x[l+1]={0};
    for (int i = 0; i < l; i++) 
        x[(int)str[i]]++;
    char mostchar=0;
    char leastchar=0;
    int most=0;
    int least=l;
    for (int i=0;i<l+1;i++)
	{
        if (x[i] > 0) 
		{
            if (x[i]>most) 
			{
                most=x[i];
                mostchar=(char)i;
            }
            if (x[i]<least) 
			{
                least=x[i];
                leastchar=(char)i;
            }
        }
    }
    printf("%c is the most repeated character which appeared for %d times\n", mostchar, most);
    printf("%c is the least repeated character which appeared for %d times\n", leastchar, least);
    return 0;
}
