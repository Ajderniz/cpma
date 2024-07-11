#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int digit, sum1, sum2, total;
	int digits1[5], digits2[5];

	srand(time(NULL));

	digit = rand() % 10;
	digits1[0] = rand() % 10;
	digits1[1] = rand() % 10;
	digits1[2] = rand() % 10;
	digits1[3] = rand() % 10;
	digits1[4] = rand() % 10;
	digits2[0] = rand() % 10;
	digits2[1] = rand() % 10;
	digits2[2] = rand() % 10;
	digits2[3] = rand() % 10;
	digits2[4] = rand() % 10;

	printf("%d ", digit);
	for (i = 0; i < 5; i++) {
		printf("%d", digits1[i]);
	}
	putchar(' ');
	for (i = 0; i < 5; i++) {
		printf("%d", digits2[i]);
	}
	putchar('\n');
	/*
	printf("First single digit: ");
	scanf("%1d", &digit);
	printf("First group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &digits1[0], &digits1[1], &digits1[2], &digits1[3],
			&digits1[4]);
	printf("Secong group of 5 digits: ");
	scanf("%1d%1d%1d%1d%1d", &digits2[0], &digits2[1], &digits2[2], &digits2[3],
			&digits2[4]);
	*/

	sum1 = digit + digits1[1] + digits1[3] + digits2[0] + digits2[2] +
		digits2[4];
	sum2 = digits1[0] + digits1[2] + digits1[4] + digits2[1] + digits2[3];
	total = 3 * sum1 + sum2;

	printf("Check digit (proper):\t%d\n", 9 - ((total - 1) % 10));
	printf("Check digit (alt):\t%d\n", 10 - (total % 10));
	printf("Check digit (alt):\t%d\n", 10 - ((total % 10)) % 10);
	return 0;
} /* end main */
