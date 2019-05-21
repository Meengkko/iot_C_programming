#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	// char string[10] = "Good time";
	char string[] = "Good time";
	//	int length = sizeof(string);
	int i = 0;

	while(string[i] != '\0'){
		printf("%c", string[i++]); // 후행 연산자
	}
/*
	for(int i=0; i<length; i++){
		printf("%c",string[i]);
	}
*/
}
