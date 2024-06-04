
#include <stdio.h>

#define TAX 0.05f

int main(void)
{
	float f_amount, f_amount_plus_tax;

	printf("Enter an amount: ");
	scanf("%f", &f_amount);

	f_amount_plus_tax = f_amount + (f_amount * TAX);

	printf("With tax added: $%.2f\n", f_amount_plus_tax);

	return 0;
} //end main
