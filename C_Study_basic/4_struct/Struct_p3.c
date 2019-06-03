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
	char* summary[2] = { "수석", "최저점" };
	int N=0;
	int i, j;
	int ScoreMax = 0;
	int ScoreMin = 100;
	int Sum = 0;
	int pivot;

	system("chcp 949");

	while (N<20) {
		fputs("이름을 입력하세요. : ", stdout);
		scanf("%s", Student[N].name);
		
		if (!strcmp((Student[N].name), "종료")) {
			break;
		}

		fputs("점수를 입력하세요. : ", stdout);
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

	printf("\n\t*학생수 : %d명\n\n", N);
	printf("\t*평균 : %d점\n\n", (Sum / N));
	
	for (i = 0; i < 2; i++) {
		printf("\t*%s\n", summary[i]);
		for (j = 0; j < N; j++) {
			if (pivot == Student[j].score) {
				printf("\t\t-%s(%d점)\n", Student[j].name, Student[j].score);
			}
		}
		pivot = ScoreMin;
	}
}
