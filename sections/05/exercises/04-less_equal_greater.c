
#include <stdio.h>

int main(void)
{
	int i, j, equality;

	printf("Value 1: ");
	scanf("%d", &i);
	printf("Value 2: ");
	scanf("%d", &j);

	equality = i >= j ? i > j : -1;

	printf("%d ", i);
	switch(equality) {
		case -1:
			putchar('<');
			break;
		case 0:
			printf("==");
			break;
		case 1:
			putchar('>');
			break;
	}
	printf(" %d\n", j);

	return 0;
} /* end main */
