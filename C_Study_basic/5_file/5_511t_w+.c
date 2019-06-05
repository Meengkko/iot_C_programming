#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9

void main() {

	int ch, i;

	system("chcp 949");
	// w모드는 파일이 없을 경우에는 새로 생성을 하고
	// 기존에 파일이 있는 경우에는 해당 파일의 내용을 모두
	// 초기화한 상태에서 새로 작성한 내용을 overwrite한다.
	FILE* fp = fopen("data.txt", "w+");
	if(fp==NULL){
		puts("파일 오픈 실패!");
		return (-1); // 비정상적 종료를 의미하기 위해서 -1을 반환
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	 // fclose(fp); // 스트림의 종료
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}
}