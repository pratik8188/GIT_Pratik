/*3.	Write a program in C to display n terms of natural number and their sum. */
	
	
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d natural numbers are:\n", n);
    
    for (i = 1; i <= n; i++) 
	{
        printf("%d ", i);
        sum += i;
    }

    printf("\n");
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    
    return 0;
}