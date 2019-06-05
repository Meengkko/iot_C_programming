#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return (-1);
	}

	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);
/*
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
*/
	printf("%s",fgets(str, sizeof(str), fp));
	printf("%s",fgets(str, sizeof(str), fp));

	fclose(fp);
	return 0;
}
