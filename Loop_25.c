//25.	Write a C program to determine whether a given number is prime or not. 
	
	
#include <stdio.h>
int main() 
{
    int number, i, isPrime = 1;

    printf("Input a number: ");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; i++) 
	{
        if (number % i == 0) 
		{
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}