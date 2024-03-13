 /*16.	Write a program in C to make such a pattern like a pyramid 
 with a number which will repeat the number in the same row.*/
     
	 
#include <stdio.h>
int main() 
{
    int rows, i, j, k = 1, space; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) 
	{
        for (space = 1; space <= rows - i; space++) 
		{
            printf("  ");
        }
        for (j = 1; j <= i; j++) 
		{
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}