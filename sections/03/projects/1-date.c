
#include <stdio.h>

int main(void)
{
	int mm, dd, yyyy;

	printf("Date (mm/dd/yyyy):\t");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("%04d%02d%02d\n", yyyy, mm, dd);

	return 0;
} /* end main */
