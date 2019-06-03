#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int N = 0;
	int numArr[50] = { 0 };
	int index=0;
	int numEli;

	system("chcp 949");

	do{
		printf("ют╥б %d: ", N + 1);
		scanf("%d", &numArr[N]);
		N++;

	} while (numArr[N-1] != 0 && N < 50);

	printf("\n\n[");

	N--;

	for (; index < N; index++) {
		printf("%d,", numArr[index]);
	}

	printf("\b]");

	if (N % 2 == 0) {
		numEli = N / 2;
	}
	else {
		srand((int)time(NULL));
		numEli = N / 2 + (rand() % 2);
	}

	while (numEli > 0) {
		srand((int)time(NULL));
		index = rand() % N;
		for (; index < N; index++) {
			numArr[index] = numArr[index + 1];
		}
		numEli--;
		N--;
	}

	printf("\n\n[");

	for (index = 0; index < N; index++) {
		printf("%d,", numArr[index]);
	}

	printf("\b]");
}