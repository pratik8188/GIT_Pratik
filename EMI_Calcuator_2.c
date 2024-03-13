#include <stdio.h>
#include <math.h>
double calculate_emi(double principal, double rate_of_interest, int time_period) 
{
    double monthly_interest_rate = rate_of_interest / (12 * 100);
    double emi = principal * monthly_interest_rate * pow(1 + monthly_interest_rate, time_period) / (pow(1 + monthly_interest_rate, time_period) - 1);
    return emi;
}

int main() 
{
    double loan_amount, rate_of_interest;
    int num_of_years;

    printf("Enter the loan amount: ");
    scanf("%lf", &loan_amount);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate_of_interest);

    printf("Enter the number of years: ");
    scanf("%d", &num_of_years);

    
    int total_payments = num_of_years * 12;
    double emi_amount = calculate_emi(loan_amount, rate_of_interest, total_payments);
    double total_emi_amount = emi_amount * total_payments;
    double total_loan_amount = total_emi_amount - loan_amount;

   
    printf("\nEMI amount: %.2f\n", emi_amount);
    printf("Total EMI amount over %d years: %.2f\n", num_of_years, total_emi_amount);
    printf("Total payable loan amount: %.2f\n", total_loan_amount);

    return 0;
}
