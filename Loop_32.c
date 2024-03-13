//32.	Write a C program to find HCF (Highest Common Factor) of two numbers. 


#include <stdio.h>

int findHCF(int num1, int num2) 
{
    int hcf;
    while (num2 != 0) 
	{
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    hcf = num1;
    return hcf;
}
int main() 
{
    int num1, num2, hcf;

    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);
    hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is : %d\n", num1, num2, hcf);
    return 0;
}