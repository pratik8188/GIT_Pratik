/*6.	Write a program in C to display the multiplication table of a given integer. */
	
	
	
#include <stdio.h>
int main() 
{
    int number, i;
    printf("Input the number (Table to be calculated): ");
    scanf("%d", &number);

    printf("Multiplication table of %d:\n", number);

    for (i = 1; i <= 10; i++) 
	{
        printf("%d X %d = %d\n", number, i, number * i);
    }

    return 0;
}