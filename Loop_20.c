//20.	Write a program in C to display the n terms of square natural number and their sum.
//1 4 9 16 ... n Terms 


#include <stdio.h>
int main() 
{
    int n, i, sum = 0;

    printf("Input the number of terms: ");
    scanf("%d", &n);

    printf("The square natural up to %d terms are: ", n);

    for (i = 1; i <= n; i++) 
	{
        int square = i * i;
        printf("%d ", square);
        sum += square;
    }

    printf("\nThe Sum of Square Natural Number up to %d terms = %d\n", n, sum);
    return 0;
}