#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");
	// a모드는 파일이 없을 경우에는 새로 생성을 하고
	// 기존에 파일이 있는 경우에는 파일의 끝에 덧붙여 쓰기를 한다.
	// FILE* fp = fopen("data1.txt", "at");
	FILE* fp = fopen("data2.txt", "at");
	if(fp==NULL){
		puts("파일 오픈 실패!");
		return (-1); // 비정상적 종료를 의미하기 위해서 -1을 반환
	}

	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);
	 // fclose(fp); // 스트림의 종료
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}
}