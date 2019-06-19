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

	puts("도서 정보 입력");

	for (idx = 0; idx < N; idx++) {
		fputs("저자: ", stdout);
		gets(westLibrary[idx]->author);
		
		fputs("제목: ", stdout);
		gets(westLibrary[idx]->title);
		
		fputs("페이지 수: ", stdout);
		scanf("%d", &westLibrary[idx]->pages);
		getchar();
	}
	
	putchar('\n');

	for (idx = 0; idx < N; idx++) {
		printf("book %d\n저자: %s\n제목: %s\n페이지 수: %d\n",
			idx + 1, westLibrary[idx]->author, westLibrary[idx]->title, westLibrary[idx]->pages);
	}
	for (idx = 0; idx < N; idx++) {
		free(westLibrary[idx]);
	}
}