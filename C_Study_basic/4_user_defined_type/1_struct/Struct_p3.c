#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct{
	char name[20];
	int score;
} student;

void main() {

	student Student[20];
	char* summary[2] = { "����", "������" };
	int N=0;
	int i, j;
	int ScoreMax = 0;
	int ScoreMin = 100;
	int Sum = 0;
	int pivot;

	system("chcp 949");

	while (N<20) {
		fputs("�̸��� �Է��ϼ���. : ", stdout);
		scanf("%s", Student[N].name);
		
		if (!strcmp((Student[N].name), "����")) {
			break;
		}

		fputs("������ �Է��ϼ���. : ", stdout);
		scanf("%d", &Student[N].score);
		
		if (Student[N].score > ScoreMax) {
			ScoreMax = Student[N].score;
		}
		else if (Student[N].score < ScoreMin) {
			ScoreMin = Student[N].score;
		}

		Sum = Sum + Student[N].score;

		N++;
	}

	pivot = ScoreMax;

	printf("\n\t*�л��� : %d��\n\n", N);
	printf("\t*��� : %d��\n\n", (Sum / N));
	
	for (i = 0; i < 2; i++) {
		printf("\t*%s\n", summary[i]);
		for (j = 0; j < N; j++) {
			if (pivot == Student[j].score) {
				printf("\t\t-%s(%d��)\n", Student[j].name, Student[j].score);
			}
		}
		pivot = ScoreMin;
	}
}
