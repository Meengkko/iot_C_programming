#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	FILE * fp = fopen("obama_speech.txt","rt");
	char wordPrti[30];
	int ret;
	unsigned int cnt_A = 0;
	unsigned int cnt_P = 0;

	system("chcp 949");

	while (1) {

		ret = fscanf(fp, "%s", wordPrti);

		if (ret == EOF) {
			break;
		}
		if (wordPrti[0] == 'A' || wordPrti[0] == 'a') {
			cnt_A++;
		}
		else if (wordPrti[0] == 'P' || wordPrti[0] == 'p') {
			cnt_P++;
		}
	}
	printf("A로 시작하는 단어의 수: %u\n", cnt_A);
	printf("P로 시작하는 단어의 수: %u\n", cnt_P);

	fclose(fp);
}