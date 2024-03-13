//Write a program which store 1 to 5 squar inside the array.

#include <stdio.h>
int main() 
{
    int squares[5];
    for (int i = 1; i <= 5; ++i) 
	{
        squares[i - 1] = i * i;
    }

    printf("Squares of numbers from 1 to 5:\n");
    for (int i = 0; i < 5; ++i) 
	{
        printf("Square of %d: %d\n", i + 1, squares[i]);
    }
    return 0;
}
