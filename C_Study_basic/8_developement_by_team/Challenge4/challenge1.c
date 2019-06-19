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

	puts("도서 정보 입력");

	for (idx = 0; idx < N; idx++) {
		puts("저자: ");
		scanf("%s", eastLibrary[idx].author);
		getchar();
		puts("제목: ");
		scanf("%s", eastLibrary[idx].title);
		getchar();
		puts("페이지 수: ");
		scanf("%d", &eastLibrary[idx].pages);
		getchar();
	}
	
	for (idx = 0; idx < N; idx++) {
		printf("book %d\n저자: %s\n제목: %s\n페이지 수: %d\n",
			idx + 1, eastLibrary[idx].author, eastLibrary[idx].title, eastLibrary[idx].pages);
	}
}