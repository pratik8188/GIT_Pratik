//28.	Write a program in C to display the first n terms of Fibonacci series. Fibonacci series 0 1 2 3 5 8 13 .....


#include <stdio.h>
int main() 
{
    int n, firstTerm = 0, secondTerm = 1, nextTerm, i;
    printf("Input number of terms to display: ");
    scanf("%d", &n);
    printf("Here is the Fibonacci series up to %d terms:\n", n);
    printf("%d %d ", firstTerm, secondTerm);

    for (i = 3; i <= n; i++) 
	{
        nextTerm = firstTerm + secondTerm;
        printf("%d ", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    printf("\n");
    return 0;
}
