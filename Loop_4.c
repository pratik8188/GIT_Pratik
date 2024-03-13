/*4.	Write a program in C to read 10 numbers from keyboard and find their sum and average.*/
        
		
#include <stdio.h>
int main() 
{
    int numbers[10];
    int i, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    average = (float)sum / 10;
    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %.2f\n", average);
    
    return 0;
}