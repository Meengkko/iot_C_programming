#include <stdio.h>

int NUM_NATION = 7;

int vote(int n) {
	
	int count;
	int idx;

	if (n <= 2) {
		return 1;
	}

	count = 1;

	count += vote(n - 1);
	
	for (idx = 2; idx < n; idx++) {
		count += vote(idx) * vote(n - 1);
	}
	return count;
}

void main() {
	printf("%d", vote(NUM_NATION));
}