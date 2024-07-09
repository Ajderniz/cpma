
#include <stdio.h>

int main(void)
{
	int i;
	float x, y;

	printf("\"%%f%%d%%f\"\t");
	scanf("%f%d%f", &x, &i, &y);
	printf("x == %f\ni == %d\ny == %f\n", x, i, y);
	return 0;
} /* end main */
