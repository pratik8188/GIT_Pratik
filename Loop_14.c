/*14.	Write a C program to calculate the factorial of a given number. */
	
	
#include<stdio.h>
int main()
{
	int fact=1,i=1,n;
	printf("\n enter number to calculate  factorial");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("\n factorial of a number is %d",fact);
}