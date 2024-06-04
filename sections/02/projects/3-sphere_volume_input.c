
#include <stdio.h>

#define PI 3.1415f

int main(void)
{
	float f_radius, f_volume;

	printf("Radius (square meters): ");
	scanf("%f", &f_radius);

	f_volume = (4.0f / 3.0f) * PI * (f_radius * f_radius * f_radius);

	printf("Volume = 4/3 * PI * r^3 = %.2f\n", f_volume);

	return 0;
} //end main
