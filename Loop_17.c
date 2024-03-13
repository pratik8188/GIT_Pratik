/*17.	Write a program in C to display the pattern like a pyramid 
using asterisk and each row contain an odd number of asterisks.*/
      
	  
#include <stdio.h>
int main() 
{
    int rows, i, j, space, asterisks = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) 
	{
        for (space = 1; space <= rows - i; space++)
		{
            printf(" ");
        }
 
        for (j = 1; j <= asterisks; j++) 
		{
            printf("*");
        }
        asterisks += 2;
        printf("\n");
    }
    return 0;
}