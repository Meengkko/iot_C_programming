#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	int num1, num2, num3;
	int temp;

	scanf("%d, %d, %d", &num1, &num2, &num3);
	
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	if (num1 > num3) {
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	
	if (num2 > num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;

	}
	printf("%d", num2);
}
