#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning (disable:4996)

void execute_dynamic_malloc() {

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
		printf("�Է� %d]: %d \n", idx + 1, *(nptr1 + idx));
	}
	printf("\n����: %d\n\n", total);

	free(nptr1);
	// free(nptr1);
	// �Ҵ�� �޸𸮴� �ݵ�� �ѹ��� free���־�� �Ѵ�.
}

void main() {

	system("chcp 949");

	int menu;
	while (1) {
		puts("���� �޸� �Ҵ��� ü���սô�.");
		puts("1. ���� ����");
		puts("2. ����");
		fputs("�޴��� �����ϼ���: ", stdout);
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			printf("1,2 �޴��� �����ϼ���.\n\n");
		}
	}
}