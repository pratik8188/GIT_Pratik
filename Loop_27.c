//27.	Write a program in C to find the prime numbers within a range of numbers.
	

#include <stdio.h>
int isPrime(int number) 
{
    int i;
    if (number <= 1)
        return 0; 

    for (i = 2; i * i <= number; i++) 
	{
        if (number % i == 0)
            return 0; 
    }
    return 1;
}

int main() 
{
    int startRange, endRange, i;
    printf("Input starting number of range: ");
    scanf("%d", &startRange);
    printf("Input ending number of range: ");
    scanf("%d", &endRange);

    printf("The prime numbers between %d and %d are:\n", startRange, endRange);
    for (i = startRange; i <= endRange; i++) 
	{
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
