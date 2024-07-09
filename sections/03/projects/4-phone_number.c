
#include <stdio.h>

int main(void)
{
	int area_code, phone_number1, phone_number2;

	printf("Phone number [(xxx) xxx-xxxx]: ");
	scanf(" (%3d) %3d-%4d", &area_code, &phone_number1, &phone_number2);
	printf("Phone number: %03d.%03d.%04d\n", area_code, phone_number1,
			phone_number2);
	return 0;
} /* end main */
