//31.	Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.


#include <stdio.h>
int main() 
{
    int number, sum = 0;
    printf("Numbers between 100 and 200, divisible by 9:\n");
    for (number = 100; number <= 200; number++) 
	{
        if (number % 9 == 0) 
		{
            printf("%d ", number);
            sum += number;
        }
    }
    printf("\nThe sum: %d\n", sum);
    return 0;
}