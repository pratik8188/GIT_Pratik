/*12.	Write a program in C to make such a pattern like a pyramid with numbers increased by 1.*/


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
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
