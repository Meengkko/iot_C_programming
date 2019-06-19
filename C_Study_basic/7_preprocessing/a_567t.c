#include <stdio.h>
#include <windows.h>
#define DEBUG_LEVEL	2

int main(){

	system("chcp 949");

	int num1, num2;

#if DEBUG_LEVEL >= 1
	puts("main] debug1");
#endif
	printf("두 개의 정수 입력: ");
#if DEBUG_LEVEL >= 2
	puts("main] debug2");
#endif
	scanf("%d %d", &num1, &num2);
#if DEBUG_LEVEL == 3
	puts("main] debug3");

	puts("main] debug4");
#endif
	printf("%d + %d = %d \n", num1, num2, num1+num2);

#if DEBUG_LEVEL == 3
	puts("main] debug5");
#endif
	printf("%d - %d = %d \n", num1, num2, num1-num2);
#if DEBUG_LEVEL >= 1
	puts("main] debug6");
#endif

	return 0;
}
