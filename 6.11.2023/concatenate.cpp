#include <stdio.h>
int main() 
{
    char str1[1000], str2[1000];
    printf("Enter the first string");
    scanf("%s", str1);
    printf("Enter the second string");
    scanf("%s", str2);
    int i = 0;
    while (str1[i] != '\0') 
    i++;
    int j = 0;
    while (str2[j] != '\0') 
	{
        str1[i + j] = str2[j];
        j++;
    }
    str1[i + j] = '\0'; 
    printf("Concatenated string is %s\n",str1);
    return 0;
}
