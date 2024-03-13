#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter persons age: ");
	scanf("%d",&age);
	
	if(age<18)
	{
		printf("\n Person is minor");
	}
	else
	{
		printf("\n Person is major");
	}
}