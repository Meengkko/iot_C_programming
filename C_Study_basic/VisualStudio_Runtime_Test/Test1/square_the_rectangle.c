#include <stdio.h>
#pragma warning (disable:4996)
#define MAX_LENGTH_OF_LECTANGULAR 1000
#define MAX_SQUARE_NUM 20

int divide_by_square(int longer, int shorter) {
	int temp;
	int sqnum = 0;

	while (shorter) {
		sqnum += (longer / shorter);
		temp = longer;
		longer = shorter;
		shorter = (temp % shorter);
		if (sqnum > MAX_SQUARE_NUM) {
			return 0;
		}
	}
	return 1;
}

void main() {
	int index_i;
	int index_j;
	int NumCase = 0;

	for (index_i = 2; index_i <= MAX_LENGTH_OF_LECTANGULAR; index_i++) {
		for (index_j = 1; index_j < index_i; index_j++) {
			NumCase = NumCase + divide_by_square(index_i, index_j);
		}
	}
	printf("%d", NumCase);
}