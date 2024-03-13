#include<stdio.h>
int main()
{
	int age;
	printf("\n Enter age of person: ");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("\n Person is minor");
	}
	else if(age>=18 == age<50)
	{
		printf("\n Person is major");
	}
	else if(age>=50 == age<100)
	{
		printf("\n Person is senior citizen");
	}
}