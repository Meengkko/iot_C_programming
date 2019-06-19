#include <stdio.h>
#include <windows.h>
#define IOT_DEBUG

int main(){

	system("chcp 949");

	int num1, num2;

#ifdef IOT_DEBUG
	puts("main] debug1");
#endif
	printf("두 개의 정수 입력: ");
#ifdef IOT_DEBUG
	puts("main] debug2");
#endif
	scanf("%d %d", &num1, &num2);
#ifdef IOT_DEBUG
	puts("main] debug3");

	puts("main] debug4");
#endif
	printf("%d + %d = %d \n", num1, num2, num1+num2);

#ifdef IOT_DEBUG
	puts("main] debug5");
#endif
	printf("%d - %d = %d \n", num1, num2, num1-num2);
#ifdef IOT_DEBUG
	puts("main] debug6");
#endif

	return 0;
}
