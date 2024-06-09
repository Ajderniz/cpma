
#include <stdio.h>

int main(void)
{
	float f_x, f_result;

	printf("Enter the value of x: ");
	scanf("%f", &f_x);

	f_result = 
		((((3.0f * f_x + 2.0f) * f_x - 5.0f) * f_x - 1) * f_x + 7) * f_x - 6;

	printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %.2f\n", f_result);

	return 0;
} //end main
