#include <stdio.h>

int main()
{
	float x;
	printf("Nhap so thuc: ");
	scanf("%f", &x);
	printf("Gia tri da nhap: %.4f\n", x);
	int y = (int)x;
	printf("Phan nguyen la: %d\n", y);
	float z = x - y;
	printf("Phac thuc la: %.4f", z);
	return 0;
}
