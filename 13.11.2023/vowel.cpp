#include <stdio.h>
#include <string.h>
int y(char c) 
{
    switch (c) 
	{
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            return 1; 
        default:
            return 0; 
    }
}
int main() 
{
    char x[1000];
    printf("Enter a string");
    scanf("%s", x);
    printf("The vowels in the string are ");
    for (int i = 0; i < strlen(x); i++) 
	{
        if (y(x[i])) 
		    printf("%c ", x[i]);
    }
    printf("\n");
    return 0;
}

