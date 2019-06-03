#include <stdio.h>

void main() {

	system("chcp 949");

	char str[7];
	int i;

	/*for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("read %d: %s \n", i + 1, str);
	}*/
	
	for (i = 0; i < 3; i++) {
		gets(str);
		printf("read %d: %s \n", i + 1, str);
	}
}
