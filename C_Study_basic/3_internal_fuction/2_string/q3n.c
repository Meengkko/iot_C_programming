#include <stdio.h>
#include <string.h>

void main() {
	char str1[20];
	char str2[20];
	char name1[10];
	char name2[10];
	char age1[10];
	char age2[10];
	int index;
	int indexA;

	system("chcp 949");

	puts("����� �̸��� ���̸� ���̿� ������ �ΰ� �Է�: ");
	gets(str1);
	puts("����� �̸��� ���̸� ���̿� ������ �ΰ� �Է�: ");
	gets(str2);

	for (index = 0; str1[index] != ' '; index++) {
		name1[index] = str1[index];
	}
	name1[index] = '\0';
	
	for (indexA = 0; str1[index] != '\0'; index++, indexA++) {
		age1[indexA] = str1[index];
	}
	age1[indexA] = '\0';

	for (index = 0; str2[index] != ' '; index++) {
		name2[index] = str2[index];
	}
	name2[index] = '\0';
		
	for (indexA = 0; str2[index] != '\0'; index++, indexA++) {
		age2[indexA] = str2[index];
	}
	age2[indexA] = '\0';

	if (!strcmp(name1, name2)) {
		puts("�λ���� �̸��� �����ϴ�.\n");
	}
	else {
		puts("�λ���� �̸��� �ٸ��ϴ�.\n");
	}

	if (!strcmp(age1, age2)) {
		puts("�λ���� ���̰� �����ϴ�.\n");
	}
	else {
		puts("�λ���� ���̰� �ٸ��ϴ�.\n");
	}
}

