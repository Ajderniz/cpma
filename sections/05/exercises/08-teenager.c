
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	int age;
	bool teenager;

	printf("Age: ");
	scanf("%d", &age);

	teenager = 13 <= age && age <= 19 ? true : false;

	printf("Teenager = %d\n", teenager);

	return 0;
} /* end main */
