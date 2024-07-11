
#include <stdio.h>

int main(void)
{
	int decimal, index;
	int octal[100];

	printf("Enter a number between 0 and 32,767: ");
	scanf("%d", &decimal);

	index = 0;
	while (decimal != 0) {
		octal[index] = decimal % 8;
		decimal /= 8;
		index++;
	}

	for (index = index - 1; index >= 0; index--) {
		printf("%1d", octal[index]);
	}
	puts("");

	return 0;
} /* end main */
