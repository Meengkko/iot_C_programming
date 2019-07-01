#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

int isPrime(int number) {
	int index;
	for (index = 2; index <= sqrt(number); index++) {
		if (number % index == 0) {
			return 0;
		}
	}
	return 1;
}

void main() {

	int integer;
	int denom;

	do {
		printf("n = ");
		scanf("%d", &integer);
	} while (integer % 2 != 0);

	fputs("[",stdout);

	for (denom = 2; denom < integer/2; denom++) {
		if (isPrime(denom)) {
			if (isPrime(integer - denom)) {
				printf("[%d, %d],", denom, (integer - denom));
			}
		}
	}
	puts("\b]");
}