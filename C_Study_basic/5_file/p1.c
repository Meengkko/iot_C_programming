#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	FILE* fp = fopen("mystory.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����");
		return (-1);
	}

	fputs("#�̸�: ����� \n", fp);
	fputs("#�ֹι�ȣ: 912222-1033333 \n", fp);
	fputs("#��ȭ��ȣ: 010-5555-2222 \n", fp);

	fclose(fp);
}
