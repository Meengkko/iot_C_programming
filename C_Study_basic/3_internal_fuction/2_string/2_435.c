#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

void main(){

	system("chcp 949");

	char str[100];

	//printf("���ڿ� �Է�: ");
	fputs("\n���ڿ� �Է�: ", stdout);
	fgets(str, sizeof(str), stdin);
	printf("\n����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);
}