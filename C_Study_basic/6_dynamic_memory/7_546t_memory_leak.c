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

	// free(nptr1);
	// number_warehouse에 대한 메모리 반환을 하지 않는다면 할당되었던
	// 메모리는 영구적으로 접근이 불가능한 메모리 영역으로 남게 된다.
	// 이러한 현상을 memory leak이라고 한다.
	// 따라서 할당된 메모리는 반드시 프로그램 종료 전에 free해야 한다.
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