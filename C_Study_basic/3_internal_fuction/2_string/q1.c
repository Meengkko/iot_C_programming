#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main(){
	char input_str[100];
	int sumInteger=0;
	int index;

	system("chcp 949");

	fputs("문자열 입력: ", stdout);
	fgets(input_str, sizeof(input_str), stdin);

	for (index = 0; index < strlen(input_str) ; index++) {
		if (input_str[index] > 47 && input_str[index] <= 57) {
			sumInteger = sumInteger + (input_str[index] - 48);
		}
	}
	printf("\n%d", sumInteger);
}
