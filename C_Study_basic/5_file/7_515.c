#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return (-1);
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	return 0;
}
