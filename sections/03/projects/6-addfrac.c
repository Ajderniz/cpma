
#include <stdio.h>

int main(void)
{
	int numerator1, numerator2, denominator1, denominator2, result_numerator,
		result_denominator;

	printf("Enter two fractions, separated by a plus ('+') sign: ");
	scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2,
			&denominator2);

	result_numerator = numerator1 * denominator2 + numerator2 * denominator1;
	result_denominator = denominator1 * denominator2;

	printf("Sum == %d/%d\n", result_numerator, result_denominator);
	return 0;
} /* end main */
