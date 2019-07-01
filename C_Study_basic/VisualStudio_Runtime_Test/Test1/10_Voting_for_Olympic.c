#include <stdio.h>

long long NUM_NATION = 4;

long long vote(int n) {

	long long count;
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
	printf("%lld", vote(NUM_NATION));
}