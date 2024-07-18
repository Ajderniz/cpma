#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char *i_to_s(const short number);

int main(void)
{
	short index/*, times, current*/;

	/*srand(time(NULL));*/

	/*times = rand() % 20;*/

	for (index = 0; index <= 99 /*times*/; index++) {
		/*current = rand() % 99;*/
		printf("%02d: %s\n", index, i_to_s(index));
	}

	return 0;
} /* main */

char *i_to_s(const short number)
{
	const short i_tens = number / 10;
	const short i_units = number % 10;
	bool reverse = false;
	char s_tens[9], s_units[7] = "";
	char *s_full = NULL;

	switch(i_tens) {
		case 0:
			strcpy(s_tens, "");
			break;
		case 1:
			if (0 == i_units) {
				strcpy(s_tens, "ten");
			} else {
				reverse = true;
				strcpy(s_tens, "teen");
			}
			break;
		case 2:
			strcpy(s_tens, "twenty");
			break;
		case 3:
			strcpy(s_tens, "thirty");
			break;
		case 4:
			strcpy(s_tens, "fourty");
			break;
		case 5:
			strcpy(s_tens, "fifty");
			break;
		case 6:
			strcpy(s_tens, "sixty");
			break;
		case 7:
			strcpy(s_tens, "seventy");
			break;
		case 8:
			strcpy(s_tens, "eighty");
			break;
		case 9:
			strcpy(s_tens, "ninety");
			break;
		default:
			strcpy(s_tens, "?");
	}

	switch(i_units) {
		case 0:
			if (0 == i_tens) {
				strcpy(s_units, "zero");
			} else {
				strcpy(s_units, "");
			}
			break;
		case 1:
			if (1 == i_tens) {
				strcpy(s_units, "eleven");
			} else {
				strcpy(s_units, "one");
			}
			break;
		case 2:
			if (1 == i_tens) {
				strcpy(s_units, "twelve");
			} else {
				strcpy(s_units, "two");
			}
			break;
		case 3:
			if (1 == i_tens) {
				strcpy(s_units, "thir");
			} else {
				strcpy(s_units, "three");
			}
			break;
		case 4:
			strcpy(s_units, "four");
			break;
		case 5:
			if (1 == i_tens) {
				strcpy(s_units, "fif");
			} else {
				strcpy(s_units, "five");
			}
			break;
		case 6:
			strcpy(s_units, "six");
			break;
		case 7:
			strcpy(s_units, "seven");
			break;
		case 8:
			strcpy(s_units, "eight");
			break;
		case 9:
			strcpy(s_units, "nine");
			break;
		default:
			strcpy(s_units, "?");
	}

	s_full = calloc(strlen(s_tens) + strlen(s_units), sizeof(char));

	if (!reverse && 0 != i_tens && 0 != i_units) {
		strcpy(s_full, s_tens);
		strcat(s_full, "-");
		strcat(s_full, s_units);
	} else if (0 == i_tens ||
			(1 == i_tens && (1 == i_units || 2 == i_units))) {
		strcpy(s_full, s_units);
	} else {
		strcpy(s_full, s_units);
		strcat(s_full, s_tens);
	}

	return s_full;
}
