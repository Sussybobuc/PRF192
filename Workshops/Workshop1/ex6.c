#include <stdio.h>

int main() {
	float total = 0;
	float CC, GK, CK;
	char Final;
	printf("Nhap diem thanh phan : ");
	if (scanf("%f %f %f", &CC, &GK, &CK) != 3 || CC < 0 || GK < 0 || CK < 0) {
		printf("Nhap sai\n");
		return 0;
	}
	total = (CC * 0.1) + (GK * 0.3) + (CK * 0.6);
	if (total >= 8.5) {
		Final = 'A';
	} else if (total <= 8.4 && total >= 7) {
		Final = 'B';
	} else if (total <= 6.9 && total >= 5.5) {
		Final = 'C';
	} else if (total <= 5.4 && total >= 4) {
		Final = 'D';
	} else if (total < 4) {
		Final = 'F';
	}
	if ( CC >= 4 && GK >= 4 && CK >= 4 && Final != 'F') {
		printf("%-10s| %-10s| %-10s| %-10s|\n","CC","GK","CK","Total");
		printf("%-10.1f| %-10.1f| %-10.1f| %-10.1f\n|",CC, GK, CK, total);
		printf("Ban da tot nghiep loai %c", Final);
	} else {
		printf("Ban ton them 5 trieu!!");
	}
	return 0;
}