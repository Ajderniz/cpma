
#include <stdio.h>

#define MAX_PRICE 9999.99f

int main(void)
{
	int item_number, purchase_dd, purchase_mm, purchase_yyyy;
	float unit_price;

	printf("Item number: ");
	scanf("%d", &item_number);
	printf("Unit price: ");
	scanf("%f", &unit_price);
	unit_price = unit_price > MAX_PRICE ? MAX_PRICE : unit_price;
	printf("Purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &purchase_mm, &purchase_dd, &purchase_yyyy);

	printf("Item\tUnit\tPurchase\n");
	printf("Number\tPrice\tDate\n");
	printf("%d\t%7.2f\t%02d/%02d/%04d\n", item_number, unit_price, purchase_mm,
			purchase_dd, purchase_yyyy);

	return 0;
} /* end main */
