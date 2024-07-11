
#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 7;
	j = 9;
	i *= j + 1;
	printf("(a)\ti = 7\n\tj = 9\n\ti *= j + 1\n");
	printf("\ti == %d\n\tj == %d\n", i, j);
	puts("");

	i = j = k = 1;
	i += j += k;
	printf("(b)\ti = j = k = 1\n\ti += j += k\n");
	printf("\ti == %d\n\tj == %d\n\tk == %d\n", i, j, k);
	puts("");

	i = 1;
	j = 2;
	k = 3;
	i -= j -= k;
	printf("(c)\ti = 1\n\tj = 2\n\tk = 3\n\ti -= j -= k\n");
	printf("\ti == %d\n\tj == %d\n\tk == %d\n", i, j, k);
	puts("");

	i = 2;
	j = 1;
	k = 0;
	i *= j *= k;
	printf("(c)\ti = 2\n\tj = 1\n\tk = 0\n\ti *= j *= k\n");
	printf("\ti == %d\n\tj == %d\n\tk == %d\n", i, j, k);

	return 0;
} /* end main */
