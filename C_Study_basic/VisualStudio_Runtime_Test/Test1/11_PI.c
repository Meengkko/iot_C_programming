// ¹Ì¿Ï¼º

#include <stdio.h>
#include <math.h>
#define N 11

int q = 1;

void main() {
	double Pi = 3.14159265358;
	double comparePi;
	double comparePi2;
	long long powerTen = pow(10, N);

	while (1) {

		comparePi = (double)q / N;

		if (comparePi < Pi) {
			q++;
			continue;
		}
		else {
			comparePi2 = (double)(q - 1) / N;
			break;
		}
	}

	if (abs(Pi - comparePi) < abs(Pi - comparePi2)) {
		printf("%d", q);
	}
	else {
		printf("%d", q - 1);
	}

}