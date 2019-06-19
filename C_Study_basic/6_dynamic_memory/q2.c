#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning (disable:4996)	

void main() {

	system("chcp 949");

	int idx = 0;
	int num_extention = 1;
	int* ptrItg = (int*)malloc((sizeof(int)*5));

	while(1){

		printf("\t%d번째 정수 입력 : ", idx+1);
		scanf("%d",ptrItg+idx);

		if (ptrItg[idx] == (-1)) {
			break;
		}

		idx++;

		if (idx % 3 == 1 && idx > 3) {
			ptrItg = realloc(ptrItg, sizeof(int)*(3*num_extention + 5));
			num_extention++;
		}
	}

	putchar('\n');
	printf("< 입력받은 수 > \n[ ");
	for (idx = 0; ptrItg[idx] != -1; idx++) {
		printf("%d, ",ptrItg[idx]);
	}
	printf("\b\b ]");

	free(ptrItg);
}
