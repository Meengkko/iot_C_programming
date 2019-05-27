#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {

	int num;
	int counter = 0;
	int index;

	scanf("%d", &num);

	for (index = 0; index < 500; index++) {
		if (num != 1) {
			if (num % 2 == 0) {
				num = num / 2;
				counter = counter + 1;
			}
			else {
				num = (3 * num) + 1;
				counter = counter + 1;
			}
		}
		else {
			return counter;
		}
	}
	return (-1);
}