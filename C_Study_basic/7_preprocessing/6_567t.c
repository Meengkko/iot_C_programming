#include <stdio.h>
#include <windows.h>
#define DEBUG	0

int main(){

	system("chcp 949");

	int num1, num2;

	puts("main] debug1");
	printf("두 개의 정수 입력: ");
	puts("main] debug2");
	scanf("%d %d", &num1, &num2);
	puts("main] debug3");

	puts("main] debug4");
	printf("%d + %d = %d \n", num1, num2, num1+num2);

	puts("main] debug5");
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	puts("main] debug6");

	return 0;
}
