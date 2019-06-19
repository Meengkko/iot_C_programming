#include <stdio.h>
#pragma warning (disable:4996)

int my_sum(int number) {
	int sum = 0;

	number++;
	if (number == 10) {
		return sum;
	}
	else if (number == 0) {
		return 0;
	}
	sum = number + my_sum(number-1);
}

void main() {
	int total;
	int init_value = 1;

	total = my_sum(init_value);
	printf("%d", total);
}
