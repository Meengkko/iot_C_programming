#include <stdio.h>
#pragma warning (disable:4996)

// 아래의 배열은 전역으로 선언되었으므로 자동 0으로 초기화
// 학생들의 성적을 저장하기 위한 배열
// 전역변수는 자동으로 초기화 된다.
int record[5][5];
char* subject[] = { "국어","영어","수학","국사" };
char* student[] = { "철희","철수","영희","영수" };

// 학생별 성적의 입력
void WriteRecord(void){
	int sum;
	int i, j;
	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%s 학생의 성적 입력 \n", student[i]);
		for (j = 0; j < 4; j++) {
			printf("과목 %s: ", subject[i]);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

// 과목별 성적의 합계 입력
void WriteSumRecord(void) {
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += record[j][i];
		}
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord(void) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d ", record[i][j]);
		}
		printf("\n");
	}
}

void main() {
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
}
