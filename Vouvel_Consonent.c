#include<stdio.h>
int main()
{
	char alpha;
	
	printf("\n Enter alphabate to check whether it is vowel or consonent:");
	scanf("%c",&alpha);
	
	if(alpha=='a' || alpha=='e' || alpha=='i' ||alpha=='o' ||alpha=='u')
	{
		printf("\n %c is vowel",alpha);
	}
	else
	{
		printf("\n %c is consonent",alpha);
	}
	
	
}
