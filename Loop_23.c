/*
23. Write a C program to find the Armstrong number for a 
given range of number.
Test Data :
Input starting number of range: 1 Input ending number of range : 1000 
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407
*/

#include <stdio.h>
#include <math.h>
int isArmstrong(int num) 
{
    int originalNum = num;
    int digitCount = 0, sum = 0;
    while (originalNum != 0) 
	{
        originalNum /= 10;
        ++digitCount;
    }

    originalNum = num;
    while (originalNum != 0) 
	{
        int digit = originalNum % 10;
        sum += pow(digit, digitCount);
        originalNum /= 10;
    }
    return sum == num;
}
int main() 
{
    int start, end;
    printf("Input starting number of range: ");
    scanf("%d", &start);
    printf("Input ending number of range: ");
    scanf("%d", &end);
    printf("Armstrong numbers in the given range are: ");
    for (int i = start; i <= end; ++i) 
	{
        if (isArmstrong(i)) 
		{
            printf("%d ", i);
        }
    }
    return 0;
}
