
#include <stdio.h>
#include <string.h>

int main(void)
{
	int wind_speed;
	char description[10] = {'\0'};

	printf("Wind speed: ");
	scanf("%d", &wind_speed);

	if (wind_speed < 1) {
		memcpy(description, "Calm", sizeof("Calm"));
	} else if (wind_speed <= 3) {
		memcpy(description, "Light air", sizeof("Light air"));
	} else if (wind_speed <= 27) {
		memcpy(description, "Breeze", sizeof("Breeze"));
	} else if (wind_speed <= 47) {
		memcpy(description, "Gale", sizeof("Gale"));
	} else if (wind_speed <= 63) {
		memcpy(description, "Storm", sizeof("Storm"));
	} else {
		memcpy(description, "Hurricane", sizeof("Hurricane"));
	}

	printf("Wind: %s\n", description);

	return 0;
} /* main */
