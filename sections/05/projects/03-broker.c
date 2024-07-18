
#include <stdio.h>

int main(void)
{
	int numof_shares;
	float commission, rival_commission, priceof_share;

	printf("Number of shares: ");
	scanf("%d", &numof_shares);
	printf("Price per share: ");
	scanf("%f", &priceof_share);

	if (numof_shares < 2000) {
		rival_commission = 33.03;
	} else {
		rival_commission = 33.02;
	}

	if (priceof_share < 2500.00f) {
		commission = 30.00f + priceof_share * .017f;
	} else if (priceof_share < 6250.00f) {
		commission = 56.00f + priceof_share * .0066f;
	} else if (priceof_share < 20000.00f) {
		commission = 76.00f + priceof_share * .0034f;
	} else if (priceof_share < 50000.00f) {
		commission = 100.00f + priceof_share * .0022f;
	} else if (priceof_share < 500000.00f) {
		commission = 155.00f + priceof_share * .0011f;
	} else {
		commission = 255.00f + priceof_share * .0009f;
	}
	
	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Rival commission: %.2f per share\n", rival_commission);
	printf("Commission: %.2f\n", commission);

	return 0;
} /* end main */
