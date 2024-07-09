
#include <stdio.h>

int main(void)
{
	int numbers[16], row_sums[4], col_sums[4], diagonal_sums[2];

	printf("Enter numbers 1-16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &numbers[0], &numbers[1],
			&numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6],
			&numbers[7], &numbers[8],&numbers[9], &numbers[10], &numbers[11],
			&numbers[12], &numbers[13], &numbers[14], &numbers[15]);
	
	row_sums[0] = numbers[0] + numbers[1] + numbers[2] + numbers[3];
	row_sums[1] = numbers[4] + numbers[5] + numbers[6] + numbers[7];
	row_sums[2] = numbers[8] + numbers[9] + numbers[10] + numbers[11];
	row_sums[3] = numbers[12] + numbers[13] + numbers[14] + numbers[15];

	col_sums[0] = numbers[0] + numbers[4] + numbers[8] + numbers[12];
	col_sums[1] = numbers[1] + numbers[5] + numbers[9] + numbers[13];
	col_sums[2] = numbers[2] + numbers[6] + numbers[10] + numbers[14];
	col_sums[3] = numbers[3] + numbers[7] + numbers[11] + numbers[15];

	diagonal_sums[0] = numbers[0] + numbers[5] + numbers[10] + numbers[15];
	diagonal_sums[1] = numbers[3] + numbers[6] + numbers[9] + numbers[12];

	printf( "\n"
			"%02d %02d %02d %02d\n"
			"%02d %02d %02d %02d\n"
			"%02d %02d %02d %02d\n"
			"%02d %02d %02d %02d\n",
			numbers[0], numbers[1], numbers[2], numbers[3],
			numbers[4], numbers[5], numbers[6], numbers[7],
			numbers[8], numbers[9], numbers[10], numbers[11],
			numbers[12], numbers[13], numbers[14], numbers[15]
			);

	puts("");
	printf("Row sums: %d %d %d %d\n", row_sums[0], row_sums[1], row_sums[2],
			row_sums[3]);
	printf("Col sums: %d %d %d %d\n", row_sums[0], row_sums[1], row_sums[2],
			col_sums[3]);
	printf("Diagonal sums: %d %d\n", diagonal_sums[0], diagonal_sums[1]);

	return 0;
} /* end main */
