
#include <stdio.h>

int main(void)
{
	unsigned int hh, mm;
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hh, &mm);
	printf("12-hour format: %02d:%02d\n", 12 != hh ? hh % 12 : 12, mm);
	return 0;
} /* main */
