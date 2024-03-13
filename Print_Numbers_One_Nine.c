#include<stdio.h>
int main()
{
	int num;
	
	printf("\n Enter a number from the range 1 to 5 : ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1: printf("ONE");
		break;
		
		case 2: printf("TWO");
		break;
		
		case 3: printf("THREE");
		break;
		
		case 4: printf("FOUR");
		break;
		
		case 5: printf("FIVE");
		break;
		
		case 6: printf("SIX");
		break;
		
		case 7: printf("SEVEN");
		break;
		
		case 8: printf("EIGHT");
		break;
		
		case 9: printf("NINE");
		break;
		
		default : printf("Enter Correct Value");
		break;
		
	}
}
