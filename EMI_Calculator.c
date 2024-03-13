#include<stdio.h>
int main()
{
	float loan,rate,years,EMI,EMI_amount,amount;
	
	printf("\n Enter loan amount: ");
	scanf("%f",&loan);
	printf("\n Enter interst rate: ");
	scanf("%f",&rate);
	printf("\n Enter no of years: ");
	scanf("%f",&years);
	
	EMI=(loan*rate*("(1+rate)^years")/("(1+rate)^years)-1");
	EMI_amount=EMI*12*years;
	amount=loan+EMI_amount;
	
	printf("\n EMI: %.2f",EMI);
	printf("\n EMI amount: %.2f",EMI_amount);
	printf("\n Total payable amount: %.2f",amount);
}