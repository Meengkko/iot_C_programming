#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");

	char* line1 = "Dear Dean, \n";
	char* line2 = "Hello my friend! \n";
	char* line3 = "Long time no see.";

	printf("fputs test -----\n");
	printf("FILE IO�� ���� �ȹ�����Ƿ� line1~3�� �о�Դٰ� ����\n\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');
}

