#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	char name[20];
	char sex;
	int age;
	int i;

	FILE* fp = fopen("friend.txt", "wt");

	for (i = 0; i < 3; i++) {
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("%s %c %d", name, &sex, &age);
		getchar(); // ���ۿ� �����ִ� \n�� �Ҹ��� ���ؼ�
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}