#include <stdio.h>

int main() {
	float S, fee;
	float money =0;
	int delay;
	printf("Nhap so km da di: ");
	if (scanf("%f", &S) != 1 || S < 0) {
		printf("Nhapsai\n");
		return 0;
	}
	printf("Nhap thoi gian cho: ");
	scanf("%d", &delay);
	if (delay <=5) {
		fee = 0;
	} else if (delay > 5) {
		fee = (delay - 5)*1;
	}
	if (S <= 0.5) {
		money = 12;
	} else if (S < 31 && S > 0.5) {
		money = 12
		        + (S - 0.5) * 15;
	} else if (S >= 30) {
		money = 12
		        +  (S-(S - 30)-0.5)* 15
		        +  (S - 30) * 12;
	}
	printf("%-10s| %-10s| %-10s|\n","Km","Time","Total");
	printf("%-10.1f| %-10d| %-10.3f|\n",S,delay,money+fee);
	return 0;
}