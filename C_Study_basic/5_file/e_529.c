#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	// ���� ����
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	// ���� ����   "123456789(EOF)"
	fp = fopen("text.txt", "rt");

	// SEEK_END test
	fseek(fp, -2, SEEK_END); // SEEK_END�� EOF
	putchar(fgetc(fp));

	// SEEK_SET test
	fseek(fp, 2, SEEK_SET); // SEEK_SET�� 1
	putchar(fgetc(fp));

	// SEEK_CUR test
	fseek(fp, 2, SEEK_CUR); // SEEK_CUR�� 3���� 4�� �̵�
	putchar(fgetc(fp));

	fclose(fp);

	return 0;
}
