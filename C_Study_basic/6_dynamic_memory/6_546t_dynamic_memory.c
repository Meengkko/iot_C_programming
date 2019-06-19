#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning (disable:4996)

void execute_dynamic_malloc() {

	int idx;
	int nnum;     // number_of_input
	int total = 0;
	int* nptr1;   // number_warehouse

	printf("전체 입력 개수를 설정하세요. :");
	scanf("%d", &nnum);
	putchar('\n');

	nptr1 = malloc(sizeof(int) * nnum);

	for (idx = 0; idx < nnum; idx++) {
		printf("%d] 수를 입력하세요: ", (idx + 1));
		scanf("%d", (nptr1 + idx));
		total += nptr1[idx];
	}

	putchar('\n');

	for (idx = 0; idx < nnum; idx++) {
		printf("입력 %d]: %d \n", idx + 1, *(nptr1 + idx));
	}
	printf("\n총합: %d\n\n", total);

	free(nptr1);
	// free(nptr1);
	// 할당된 메모리는 반드시 한번만 free해주어야 한다.
}

void main() {

	system("chcp 949");

	int menu;
	while (1) {
		puts("동적 메모리 할당을 체험합시다.");
		puts("1. 예제 실행");
		puts("2. 종료");
		fputs("메뉴를 선택하세요: ", stdout);
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			printf("1,2 메뉴만 선택하세요.\n\n");
		}
	}
}