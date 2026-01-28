#include <stdio.h>

int main() {
	int total;
	int money = 0;
	printf("Nhap tong so dien su dung: ");
	scanf("%d", &total);
	if (total <= 100) {
		money = total * 950;
	} else if (total <= 150) {
		money = 100 * 950
		        + (total - 100) * 1250;
	} else if (total <= 200) {
		money = 100 * 950
		        + 50 * 1250
		        + (total - 150) * 1350;
	} else {
		money = 100 * 950
		        + 50 * 1250
		        + 50 * 1350
		        + (total - 200) * 1550;
	}
	printf("Tong tien dien phai tra: %d VND", money);

	return 0;
}
