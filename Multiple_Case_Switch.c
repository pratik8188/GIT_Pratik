#include<stdio.h>
int main()
{
	int a,b,temp,n,choice;
	
	printf("\n 1. Number is even or Odd ");
	printf("\n 2. Number is major or minor");
	printf("\n 3. Largest Number");
	
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n Enter a number: ");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("\n Number is even");
		}
		else
		{
			printf("\n Number is odd");
		}
		break;
		
		case 2:printf("\n Enter two number: ");
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			printf("\n A:%d is major and B:%d is minor",a,b);
		}
		else
		{
			printf("\n A:%d is minor and B:%d is major",a,b);
		}
		break;
		
		case 3:printf("\n Enter Two numbers: ");
		scanf("%d%d",&a,&b);
		if(a>b)
		{
			printf("\n A is the largest");
		}
		else
		{
			printf("\n B is the largest");
		}
		break;
	}
}