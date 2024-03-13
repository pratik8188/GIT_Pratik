//scan 7 values and print index wise

#include<stdio.h>
int main()
{
	int a[7]={12,24,36,48,64,75,84},i;
	
	for(i=0;i<7;i++)
	{
		printf("\n Index wise %d : %d",i,a[i]);
	}
}