#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");

	int idx;
	int nnum;     // number_of_input
	int total = 0;
	int* nptr1;   // number_warehouse

	printf("��ü �Է� ������ �����ϼ���. :");
	scanf("%d", &nnum);
	putchar('\n');

	nptr1 = malloc(sizeof(int) * nnum);

	for (idx = 0; idx < nnum; idx++) {
		printf("%d] ���� �Է��ϼ���: ", (idx + 1));
		scanf("%d", (nptr1 + idx));
		total += nptr1[idx];
	}

	putchar('\n');

	for (idx = 0; idx < nnum; idx++) {
		printf("�Է� %d]: %d \n", idx+1, *(nptr1 + idx));
	}
	printf("\n����: %d", total);

	free(nptr1);
}
