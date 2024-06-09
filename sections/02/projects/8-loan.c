
#include <stdio.h>

int main(void)
{
	float f_loan_amount,
		  f_interest_rate,
		  f_monthly_interest_rate,
		  f_monthly_payment,
		  f_balance;

	printf("Enter amout of loan:\t$");
	scanf("%f", &f_loan_amount);
	printf("Enter interest rate:\t$");
	scanf("%f", &f_interest_rate);
	printf("Enter monthly payment:\t$");
	scanf("%f", &f_monthly_payment);

	f_monthly_interest_rate = (f_interest_rate / 100) / 12;
	f_balance = f_loan_amount;

	printf("\n");
	f_balance -= f_monthly_payment;
	f_balance += f_balance * f_monthly_interest_rate;
	printf("Balance remaining after first payment:\t$%.2f\n", f_balance);

	f_balance -= f_monthly_payment;
	f_balance += f_balance * f_monthly_interest_rate;
	printf("Balance remaining after second payment:\t$%.2f\n", f_balance);

	f_balance -= f_monthly_payment;
	f_balance += f_balance * f_monthly_interest_rate;
	printf("Balance remaining after third payment:\t$%.2f\n", f_balance);

	return 0;
} //end main
