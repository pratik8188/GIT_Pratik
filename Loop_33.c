//33.	Write a program in C to print a string in reverse order. 


#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    printf("Input a string to reverse: ");
    scanf("%s", str);
    printf("Reversed string is: ");
    for (int i = strlen(str) - 1; i >= 0; i--) 
	{
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}