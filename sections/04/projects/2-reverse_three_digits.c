
#include <stdio.h>

int main(void)
{
	int i;

	printf("Enter a three-digit number: ");
	scanf("%3d", &i);
	printf("Reversal: %1d%1d%1d\n", i % 10, (i / 10) % 10, i / 100);
	return 0;
} /* end main */
