
#include <stdio.h>

int main(void)
{
	int numerical_grade;
	char letter_grade;

	printf("Enter grade: ");
	scanf("%d", &numerical_grade);

	switch(numerical_grade) {
		case 0 ... 59:
			letter_grade = 'F';
			break;
		case 60 ... 69:
			letter_grade = 'D';
			break;
		case 70 ... 79:
			letter_grade = 'C';
			break;
		case 80 ... 89:
			letter_grade = 'B';
			break;
		case 90 ... 100:
			letter_grade = 'A';
			break;
		default:
			letter_grade = '?';
	}

	printf("Letter grade: %c\n", letter_grade);

	return 0;
} /* main */
