#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main(){
	char str1[20];
	char str2[20];
	char name1[10];
	char name2[10];
	char age1[10];
	char age2[10];
	int index;

	system("chcp 949");
	
	puts("����� �̸��� ���̸� ���̿� ������ �ΰ� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	puts("����� �̸��� ���̸� ���̿� ������ �ΰ� �Է�: ");
	fgets(str2, sizeof(str2), stdin);

	for (index = 0; str1[index] != ' '; index++) {
		name1[index] = str1[index];
	}
	name1[index] = '\0';

	for (; str1[index] != '\0'; index++) {
		age1[index] = str1[index];
	}
	age1[index] = '\0';

	for (index = 0; str2[index] != ' '; index++) {
		name2[index] = str2[index];
	}
	name2[index] = '\0';

	for (; str2[index] != '\0'; index++) {
		age2[index] = str2[index];
	}
	age2[index] = '\0';

	if (!strcmp(name1, name2)) {
		puts("�λ���� �̸��� �����ϴ�.\n");
	}else{
		pute("�λ���� �̸��� �ٸ��ϴ�.\n")
	}

	if (!strcmp(age1, age2)) {
		puts("�λ���� ���̰� �����ϴ�.\n");
	}
	else {
		pute("�λ���� ���̰� �ٸ��ϴ�.\n")
	}
}
