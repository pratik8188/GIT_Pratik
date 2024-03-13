#include<stdio.h>
int main()
{
	int year;
	printf("\n Enter a year: ");
	scanf("%d",&year);
	
	if(year%400==0)
	{
		printf("\n %d is leap year",year);
	}
	else if(year%100==0)
	{
		printf("\n %d is not a leap year",year);
	}
	else if(year%4==0)
	{
		printf("\n %d is leap year",year);
	}
	else
	{
		printf("\n not a leap year");
	}
}
