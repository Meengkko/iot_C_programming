#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define ARR_SIZE 3
// #define [ �빮�� Ű���� ] [ �� �� ] ��ó�� ��ũ�� ��� 
//		- �޸� ������ �������� �ʴ´�.

typedef struct {
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr) {
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

void main() {
	// const int MAX_SIZE=3;
	// Student arr[MAX_SIZE]; ������ �ʴ� ����
	
	// �����Ͻ� ��ó��(Preprocessing)�� �Ͼ��
	Student arr[ARR_SIZE]; 
	int i;

	system("chcp 949");

	for (i = 0; i < ARR_SIZE; i++) {
		printf("�̸�: "); scanf("%s", arr[i].name);
		printf("��ȣ: "); scanf("%s", arr[i].stdnum);
		printf("�б�: "); scanf("%s", arr[i].school);
		printf("����: "); scanf("%s", arr[i].major);
		printf("�г�: "); scanf("%d", &arr[i].year);
	}

	for (i = 0; i < ARR_SIZE; i++) {
		ShowStudentInfo(&arr[i]);
	}
}