#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {

	char str1[100];
	char* str2 = "���� ���ڿ��� �Է��Ͻʽÿ�.";
	int indexPut;
	int indexMove;
	int length;

	system("chcp 949");

	fputs(str2, stdout);
	gets(str1);

	length = strlen(str2);

	for (indexPut = 0; indexPut < length; length++, indexPut = indexPut + 2) {
		indexMove = length;
		for (; ; indexMove--) {


		}
	}

}