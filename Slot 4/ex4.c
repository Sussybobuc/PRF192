#include <stdio.h>

int main()
{
	int x,y;
	printf("Nhap x va y: ");
	int kq = scanf("%d%d",&x,&y);
	if(kq>0)
	{
		printf("Ket qua scan: %d\n ", kq);
		printf("x= %d, y= %d\n",x,y);
	}
	else
	{
		printf("Nhap sai roi!");
	}
	printf("Bai tap scanf!");
	return 0;
}