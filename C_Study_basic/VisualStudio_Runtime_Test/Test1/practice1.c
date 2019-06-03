#include <stdio.h>

void main() {

	char ch1;
	char ch2;

	char str[5] = { '1', '2','3','4','\0' };

	while (1) {

		ch1 = getchar();
		ch2 = getchar();

		if (ch1 == EOF) {
			break;
		}
		else if (ch1 > 64 && ch1 <= 90) {
			putchar(ch1 + 32);
			putchar('\n');
		}
		else if (ch1 > 96 && ch1 <= 122) {
			putchar(ch1 - 32);
			putchar('\n');
		}
		else {
			printf("Error: 잘못된 입력입니다.");
			putchar('\n');
		}
	}
}