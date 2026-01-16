#include <stdio.h>
int main() {
	char pt;
	int a,b;
	printf("Nhap a,b: ");
	scanf("%d,%d", &a,&b);
	printf("\nNhap phep toan: ");
	scanf(" %c", &pt);
	if(pt == '/') {
		if (b == 0) {
			printf("Khong the chia cho 0");
		} else {
			float z = (float) a/b;
			printf("Ket qua %d %c %d = %.2f", a,pt,b,z);
		}
	} else {
		printf("Phep tinh khong phai la chia");
		return 0;
	}
	return 0;
}

