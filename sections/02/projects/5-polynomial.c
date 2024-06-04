
#include <stdio.h>

int main(void)
{
	float f_x, f_result;

	printf("Enter the value of x: ");
	scanf("%f", &f_x);

	f_result = 
		3.0f * (f_x * f_x * f_x * f_x * f_x) +
		2.0f * (f_x * f_x * f_x * f_x) -
		5.0f * (f_x * f_x * f_x) -
		(f_x * f_x) +
		7.0f * f_x -
		6.0f;

	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", f_result);

	return 0;
} //end main
