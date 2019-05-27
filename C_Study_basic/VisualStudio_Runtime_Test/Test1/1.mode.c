#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int input_number[5];
	int counter[5] = { 1,1,1,1,1 };
	int is_printed = 0;
	int i;
	int j;

	for (i = 0; i < 5; i++) {
		printf("입력: ");
		scanf("%d", &input_number[i]);
	}

	for (i = 0; i < 5; i++) {
		if (input_number[i] != 9999) {
			for (j = i + 1; j < 5; j++) {
				if (input_number[i] == input_number[j]) {
					counter[i]++;
					input_number[j] = 9999;
				}
			}
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (counter[i] > counter[j]) {
				printf("최빈값: %d(%d회) ", input_number[i], counter[i]);
				is_printed = 1;
				break;
			}
		}
	}

	if (is_printed == 0) {
		printf("모두 동일한 횟수를 가집니다.");
	}
}
