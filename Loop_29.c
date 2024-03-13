//29.	Write a program in C to display the number in reverse order. 
	

#include <stdio.h>
int main() 
{
    int number, reversedNumber = 0, remainder;
    printf("Input a number: ");
    scanf("%d", &number);

    while (number != 0) 
	{
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    printf("The number in reverse order is: %d\n", reversedNumber);

    return 0;
}