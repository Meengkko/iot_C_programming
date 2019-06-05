#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	FILE* fp = fopen("mystory.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패");
		return (-1);
	}

	fputs("#이름: 김원상 \n", fp);
	fputs("#주민번호: 912222-1033333 \n", fp);
	fputs("#전화번호: 010-5555-2222 \n", fp);

	fclose(fp);
}
