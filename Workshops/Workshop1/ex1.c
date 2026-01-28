#include <stdio.h>
#include <math.h>
int main() 
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	int y = x;
	if(x<0)
	{
		x = -x;
		printf("|%d| = %d",y,x);
		float y = sqrt(x);
		printf("\nCan bac 2 = %.2f", y);
	}
	return 0;
}
