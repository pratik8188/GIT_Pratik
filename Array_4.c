/*
4. Write a program scan array for 10 numbers which is combination
of positive and negative numbers
replace all negative numbers by 0
*/

#include <stdio.h>
int main() 
{
    int numbers[10];
    printf("Enter 10 numbers (positive and negative): \n");
    for (int i = 0; i < 10; ++i) 
	{
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 10; ++i) 
	{
        if (numbers[i] < 0) 
		{
            numbers[i] = 0;
        }
    }
    printf("Modified array after replacing negatives with 0:\n");
    for (int i = 0; i < 10; ++i) 
	{
        printf("%d ", numbers[i]);
    }
    return 0;
}
