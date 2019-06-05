#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	char name[10];
	char sex;
	int age;
	int ret;

	FILE* fp = fopen("friend.txt", "rt");

	while (1) {
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF) {
			break;
		}
		printf("%s %c %d \n", name, sex, age);
	}
	fclose(fp);
	return 0;
}
