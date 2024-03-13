//19.	Write a program in C to print the Floyd's Triangle.

#include <stdio.h>
int main() 
{
    int rows, i, j;
    int number = 1; 
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
	{
        for (j = 1; j <= i; j++) 
		{
            printf("%d", number++ % 2);
        }
        printf("\n");
    }
    return 0;
}