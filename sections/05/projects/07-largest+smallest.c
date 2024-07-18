
#include <stdio.h>

int main(void)
{
	int i;
	int ints[4];
	int *smallest, *largest = NULL;

	printf("Enter four ints: ");
	scanf("%d %d %d %d", &ints[0], &ints[1], &ints[2], &ints[3]);
	smallest = &ints[0];

	smallest = &ints[0];
	largest = &ints[0];
	for (i = 0; i < 4; i++) {
		if (*smallest > ints[i]) {
			smallest = &ints[i];
		}
		if (*largest < ints[i]) {
			largest = &ints[i];
		}
	}
	
	printf("Smallest: %d\nLargest: %d\n", *smallest, *largest);

	return 0;
} /* main */
