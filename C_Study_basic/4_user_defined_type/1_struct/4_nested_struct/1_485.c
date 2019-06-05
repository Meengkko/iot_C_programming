#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define ARR_SIZE 3
// #define [ 대문자 키워드 ] [ 상 수 ] 전처리 매크로 상수 
//		- 메모리 공간을 차지하지 않는다.

typedef struct {
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr) {
	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

void main() {
	// const int MAX_SIZE=3;
	// Student arr[MAX_SIZE]; 허용되지 않는 문법
	
	// 컴파일시 전처리(Preprocessing)가 일어난다
	Student arr[ARR_SIZE]; 
	int i;

	system("chcp 949");

	for (i = 0; i < ARR_SIZE; i++) {
		printf("이름: "); scanf("%s", arr[i].name);
		printf("번호: "); scanf("%s", arr[i].stdnum);
		printf("학교: "); scanf("%s", arr[i].school);
		printf("전공: "); scanf("%s", arr[i].major);
		printf("학년: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		ShowStudentInfo(&arr[i]);
	}
}