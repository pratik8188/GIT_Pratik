// Write a program scan one number and update that number with original value plus half value of original value (using single variable)

#include<stdio.h>
int main()
{
	int a;
	 printf("\n Enter number: ");
	 scanf("%d",&a);
	 
	 a=(a+(a/2));
	 printf("\n Updated number: %d",a);
}