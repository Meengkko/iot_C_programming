#include <stdio.h>
#define N 3
#pragma warning (disable:4996)

typedef struct {
	char author[20];
	char title[30];
	int pages;
}BooksInfo;

int main() {

	BooksInfo eastLibrary[3];
	int idx;

	system("chcp 949");

	puts("���� ���� �Է�");

	for (idx = 0; idx < N; idx++) {
		puts("����: ");
		scanf("%s", eastLibrary[idx].author);
		getchar();
		puts("����: ");
		scanf("%s", eastLibrary[idx].title);
		getchar();
		puts("������ ��: ");
		scanf("%d", &eastLibrary[idx].pages);
		getchar();
	}
	
	for (idx = 0; idx < N; idx++) {
		printf("book %d\n����: %s\n����: %s\n������ ��: %d\n",
			idx + 1, eastLibrary[idx].author, eastLibrary[idx].title, eastLibrary[idx].pages);
	}
}