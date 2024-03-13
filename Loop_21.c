//21.	Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms


#include <stdio.h>
int main() 
{
    int terms, i;
    long long int sum = 0, term = 0, multiplier = 10;

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    printf("Series: ");

    for (i = 1; i <= terms; i++) 
	{
        term = term * multiplier + 1;
        printf("%lld ", term);
        sum += term;
    }

    printf("\nThe Sum is: %lld\n", sum);
    return 0;
}