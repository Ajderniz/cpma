
#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter a two-digit number: ");
	scanf("%2d", &i);
	printf("Reversal: %1d%1d\n", i % 10, i / 10);
	return 0;
} /* end main */
