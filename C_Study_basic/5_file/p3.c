#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");
	
	char str[30];
	int i;
	FILE* fp = fopen("mystory.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패");
		return (-1);
	}

	for (i = 0; i < 6; i++) {
		printf("%s", fgets(str, sizeof(str), fp));
	}

	fclose(fp);
	
	return 0;
}
