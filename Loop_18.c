/*18.	Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].*/
	
	
#include <stdio.h>
int main() 
{
    int terms, i;
    long long int series_sum = 0, term = 0, multiplier = 10;
    printf("Input the number of terms: ");
    scanf("%d", &terms);

    printf("Series: ");
    
	for (i = 1; i <= terms; i++) 
	{
        term = term * multiplier + 9;
        printf("%lld ", term);
        series_sum += term;
    }
    printf("\nThe sum of the series = %lld\n", series_sum);
    return 0;
}