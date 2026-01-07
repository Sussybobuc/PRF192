#include<stdio.h>
#include<limits.h>
void Hello(){
	char Ten[]= "Huyhln";
	int tuoi = 18;
	printf("Ho Ten: %s \n", Ten);
	printf("Tuoi: %d",tuoi);
}

void minmax(){
	printf("INT_MIN = %d\n", INT_MIN);
	printf("INT_MAX = %d\n", INT_MAX);
}

int main(){
	Hello();
//	minmax();
	return 0;
}
