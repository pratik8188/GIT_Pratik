/*7.	Write a program in C to display the n terms of odd natural number and their sum .*/
	
	
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;    
    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("The odd numbers are: ");

    for (i = 1; i <= n; i++) 
	{
        printf("%d ", 2 * i - 1);
        sum += 2 * i - 1;
    }

    printf("\nThe Sum of odd Natural Number up to %d terms: %d\n", n, sum);
    return 0;
}