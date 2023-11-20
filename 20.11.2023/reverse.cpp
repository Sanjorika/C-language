#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000];
	printf("Enter the string");
	scanf("%s",s1);
	int n = strlen(s1);
	char s2[n],	*ptr = s1;
	for(int i=0;i<n;i++)
		s2[i]=s1[n-i-1];
	s2[n]='\0';	
	printf("%s is the reversed string\n", s2);	
	return 0;
}
