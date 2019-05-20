#include <stdio.h>
#pragma warning (disable:4996) // pragma는 컴파일러에게 주는 옵션

void main() {
	int condition=5;

	if (condition) {
		int number = 0;
		printf("if 안의 지역변수 number 초기값: %d\n\n", number);
		number = number + 10;
		if (number == 10) {
			int number2 = 0;
			printf("if-if 안의 지역변수 number 초기값: %d\n", number2);
			number2 = number2 + 5;
			printf("number2 연산후 변경 값: %d\n", number2);
			// 하위 scope에서 상위 scope 변수 접근 가능
			printf("number2 연산후 변경 값: %d\n", number);
		}
		printf("number 연산 후 변경 값: %d", number);
		// 상위 scope에서 하위 scope 변수 접근은 불가능
		// printf("number 연산 후 변경 값: %d", number2);
	}
	// 아래 number는 if 내부 scope에서만 접근이 가능하기
	// 때문에 컴파일 에러를 발생한다.
	// printf("최종 number 값: %d\n", number);
}