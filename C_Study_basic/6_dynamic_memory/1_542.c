#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

char* ReadUserName(void) {
	char name[30];
	printf("What is your name? ");
	gets(name);
	return name;
}

int main() {

	system("chcp 949");

	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}
