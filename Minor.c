#include<stdio.h>
int main()
{
	int age;
	
	printf("\n Enter age of a person: ");
	scanf("%d",&age);
	if(age<18)
	{
		printf("\n Person is minor");
	}
}