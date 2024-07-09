
#include <stdio.h>

int main(void)
{
	int integer1, integer2, integer3;
	float floating1, floating2;

	printf("(a)\t\"%%d\"\tvs\t\" %%d\"\n");

	printf("\"%%d\"\t");
	scanf("%d", &integer1);
	printf("integer1 == %d\n", integer1);

	printf("\" %%d\"\t");
	scanf(" %d", &integer1);
	printf("integer1 == %d\n", integer1);


	printf("(b)\t\"%%d-%%d-%%d\"\tvs\t\"%%d -%%d -%%d\"\n");

	printf("\"%%d-%%d-%%d\"\t");
	scanf("%d-%d-%d", &integer1, &integer2, &integer3);
	printf("integer1 == %d\n", integer1);
	printf("integer2 == %d\n", integer2);
	printf("integer3 == %d\n", integer3);

	printf("\"%%d -%%d -%%d\"\t");
	scanf("%d -%d -%d", &integer1, &integer2, &integer3);
	printf("integer1 == %d\n", integer1);
	printf("integer2 == %d\n", integer2);
	printf("integer3 == %d\n", integer3);


	printf("(c)\t\"%%f\"\tvs\t\"%%f \"\n");

	printf("\"%%f\"\t");
	scanf("%f", &floating1);
	printf("floating1 == %f\n", floating1);

	printf("\"%%f \"\t");
	scanf("%f ", &floating1);
	printf("floating1 == %f\n", floating1);


	printf("(d)\t\"%%f,%%f\"\tvs\t\"%%f, %%f\"\n");

	printf("\"%%f,%%f\"\t");
	scanf("%f,%f", &floating1, &floating2);
	printf("floating1 == %f\n", floating1);
	printf("floating2 == %f\n", floating2);

	printf("\"%%f, %%f\"\t");
	scanf("%f, %f", &floating1, &floating2);
	printf("floating1 == %f\n", floating1);
	printf("floating2 == %f\n", floating2);

	return 0;
} /* end main */
