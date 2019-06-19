#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");

	int MaxLen;
	int idx = 0;
	int printer;
	char* cptr;
	
	fputs("문자열의 최대 길이를 입력해주십시오. ", stdout);
	scanf("%d",&MaxLen);

	cptr = (char*)malloc(MaxLen);

	getchar();
	fputs("문자열을 입력해주세요. ", stdout);
	gets(cptr);

	while(*(cptr + idx) != '\0'){
		idx++;
	}
	while(idx != -1){
		while(*(cptr + idx) != ' ' && idx !=-1){
			idx--;
		}
		printer = idx+1;
		while(*(cptr + printer) !='\0'){
			putchar(cptr[printer]);
			printer++;
		}
		*(cptr + idx) = 0;
		putchar(' ');	
	}
	free(cptr);
}