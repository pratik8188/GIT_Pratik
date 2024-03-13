//26.	Write a C program to display Pascal's triangle. Test Data :


#include <stdio.h>
int factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int rows, i, j;

    printf("Input number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < rows - i - 1; j++) 
		{
            printf(" ");
        }

        for (j = 0; j <= i; j++) 
		{
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
    return 0;
}