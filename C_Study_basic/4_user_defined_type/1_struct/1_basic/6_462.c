#include <stdio.h>
#pragma warning (disable:4996)

struct person {
	char name[20];
	char phoneNum[20];
	char age[10];
};

void main() {
	struct person arr[4] = {
		{"이  름", " 전 화 번 호", "나이"},
		{"이승기", "010-1212-0001", " 21"},
		{"정지영", "010-1313-0002", " 22"},
		{"한지수", "010-1717-0003", " 19"}
	};

	int i;

	system("chcp 949");

	for (i = 0; i < 4; i++) {
		printf("%s\t%s\t%s  \n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
}
