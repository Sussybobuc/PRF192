#include<stdio.h>

int main()
{
	int a = 5;
	int b = 10;
	float kq;
	printf("a = %d\nb = %d\n", a , b);
	kq = a + b;
	printf("%d + %d = %.0f\n",a,b, kq);
	kq = a - b;
	printf("%d - %d = %.0f\n",a,b, kq);
	kq = a * b;
	printf("%d * %d = %.0f\n",a,b, kq);
	kq = (float)a/b;
	printf("%d / %d = %.2f\n",a,b, kq);
	return 0;
}