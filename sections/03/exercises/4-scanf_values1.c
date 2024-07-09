
#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("\"%%d%%f%%d\"\t");
	scanf("%d%f%d", &i, &x, &j);
	printf("i == %d\nx == %f\ni == %d\n", i, x, j);
	return 0;
} /* end main */
