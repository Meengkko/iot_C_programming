// 숫자 갯수 세기

#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char digitAndAlpha[50];
	int length;
	int numOfDigit[10] = { 0 };
	int arrIndex;
	int asciIndex;

	system("chcp 949");

	printf("문자열을 입력하세요(50자 이하) :");
	scanf("%s", digitAndAlpha);

	length = sizeof(digitAndAlpha) - 1;

	for (arrIndex = 0; arrIndex < length; arrIndex++) {
		for (asciIndex = 0; asciIndex < 10; asciIndex++) {
			if (digitAndAlpha[arrIndex] == 48 + asciIndex) {
				numOfDigit[asciIndex]++;
			}
		}
	}

	for (arrIndex = 0; arrIndex < 10; arrIndex++) {
		printf("%d ", numOfDigit[arrIndex]);
	}
}