#include <stdio.h>
#include <stdlib.h>
#define N 3
#pragma warning (disable:4996)

typedef struct {
	char author[20];
	char title[30];
	int pages;
}BooksInfo;

int main() {

	BooksInfo* westLibrary[N];
	int idx;

	for(idx=0; idx<N; idx++){
		westLibrary[idx] = (BooksInfo *)malloc(sizeof(BooksInfo));
	}

	system("chcp 949");

	puts("���� ���� �Է�");

	for (idx = 0; idx < N; idx++) {
		fputs("����: ", stdout);
		gets(westLibrary[idx]->author);
		
		fputs("����: ", stdout);
		gets(westLibrary[idx]->title);
		
		fputs("������ ��: ", stdout);
		scanf("%d", &westLibrary[idx]->pages);
		getchar();
	}
	
	putchar('\n');

	for (idx = 0; idx < N; idx++) {
		printf("book %d\n����: %s\n����: %s\n������ ��: %d\n",
			idx + 1, westLibrary[idx]->author, westLibrary[idx]->title, westLibrary[idx]->pages);
	}
	for (idx = 0; idx < N; idx++) {
		free(westLibrary[idx]);
	}
}