
#include <stdio.h>

int main(void)
{
	int i, j, k;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &i, &j, &k);
	printf("Reversal: %1d%1d%1d\n", k, j, i);
	return 0;
} /* end main */
