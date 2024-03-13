//22.	Write a C program to check whether a given number is an armstrong number or not.

#include<stdio.h>
int main()
{
	int n,sum=0,temp,rem;
	 printf("enter to check armstrong number:");
	 scanf("%d",&n);
	 temp=n;
	 
	 while(n>0)
	 {
	 	rem=n%10;
	 	sum=sum+(rem*rem*rem);
	 	n=n/10;
	 }
	 printf("sum=%d",sum);
	
	 if(sum==temp)
	 {
	 	printf("\n%d is armstrong....",temp);
	 }
	 else
	 {
	 	printf("\n%d is not armstrong number...",temp);
	 }
}