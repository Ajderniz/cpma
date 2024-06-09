
#include <stdio.h>

int main(void)
{
	int i_amount, i_remainder, i_20_bills, i_10_bills, i_5_bills, i_1_bills;

	printf("Enter a dollar amount: ");
	scanf("%d", &i_amount);

	i_20_bills, i_10_bills, i_5_bills, i_1_bills = 0;
	i_20_bills = i_amount / 20;
	i_remainder = i_amount - (i_20_bills * 20);
	i_10_bills = i_remainder / 10;
	i_remainder = i_remainder - (i_10_bills * 10);
	i_5_bills = i_remainder / 5;
	i_1_bills = i_remainder - (i_5_bills * 5);

	printf("$20 bills: %d\n", i_20_bills);
	printf("$10 bills: %d\n", i_10_bills);
	printf(" $5 bills: %d\n", i_5_bills);
	printf(" $1 bills: %d\n", i_1_bills);

	return 0;
} //end main
