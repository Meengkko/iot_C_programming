#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");

	char* line1 = "Dear Dean, \n";
	char* line2 = "Hello my friend! \n";
	char* line3 = "Long time no see.";

	printf("fputs test -----\n");
	printf("FILE IO를 아직 안배웠으므로 line1~3을 읽어왔다고 가정\n\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');
}

