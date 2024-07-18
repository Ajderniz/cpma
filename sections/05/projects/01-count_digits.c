
#include <stdio.h>

int main(void)
{
	int i, digits;
	printf("Number: ");
	scanf("%4d", &i);
	if (-9 <= i && i <= 9){
		digits = 1;
	} else if (-99 <= i && i <= 99) {
		digits = 2;
	} else if (-999 <= i && i <= 999) {
		digits  = 3;
	} else {
		digits = 4;
	}
	printf("The number is %d digits long.\n", digits);
	return 0;
} /* main */
