#include <stdio.h>

int main() {
	float a,b,c;
	printf("Nhap a,b,c: ");
	scanf("%f %f %f", &a,&b,&c);
	float max;
	max = a;
	if(b>c&&b>a) {
		max = b;
	} else if(c>b&&c>a) {
		max = c;
	} else {
		max = a;
	}
	printf("So lon nhat la: %.2f", max);

	return max;

}