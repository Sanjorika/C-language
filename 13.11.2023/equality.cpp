#include <stdio.h>
int main()
{
	int r=0,i=0,j=0;
    char str1[1000],str2[1000]; 
    printf("Enter the first string\n");
    scanf("%s", str1);
    printf("Enter the second string\n");
    scanf("%s",str2);
    while(str1[i]!='\0'|| str2[j]!='\0')
    {
    	if(str1[i]!=str2[j])
    	r++;
    	i++;
    	j++;
	}
	if(r==0)
	printf("The strings are equal");
	else
	printf("The strings are unequal");
	return 0;
}
