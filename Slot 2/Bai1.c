#include<stdio.h>
int main() {
	int Number;
	int a;
	a = 15;
	int x = 10;
	printf("Type number: ");
	scanf("%d", &Number);
	printf("\n %d %d %d ", a,x, Number );
	return 0;
 /*const = read only
 	%_ : First number after % determined width between the content in "___" and the content after " , "
 	%_._: The number after the dot determined how much digits after " , " will be print out
 */
}