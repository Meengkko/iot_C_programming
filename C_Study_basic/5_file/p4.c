#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

long filebytes(void *buffer);

void main() {

	system("chcp 949");
	
	printf("Lyrics of < Someone like you(Adele) >\n");
	FILE* fp = fopen("byte.txt", "rt");
	printf("File size: %ldbytes\nIndication: %ld \n\n", filebytes(fp), ftell(fp));
	fclose(fp);

	printf("Lyrics of < Paradise(Coldplay) >\n");
	fp = fopen("byte2.txt", "rt");
	printf("File size: %ldbytes\nIndication: %ld \n\n", filebytes(fp), ftell(fp));
	fclose(fp);

	printf("Lyrics of < I was born to love you(Queen) >\n");
	fp = fopen("byte3.txt", "rt");
	printf("File size: %ldbytes\nIndication: %ld \n\n", filebytes(fp), ftell(fp));
	fclose(fp);
}

long filebytes(void* buffer) {

	long totbytes;

	fseek(buffer, 0, SEEK_END); // 지시자를 맨 끝으로 하고
	
	totbytes = ftell(buffer); // 그 위치를 출력하는 ftell함수를 써서 파일의 용량을 저장합니다.

	fseek(buffer, 0, SEEK_SET); // 지시자를 다시 맨 앞으로 옮기고

	return totbytes; // 용량은 반환합니다.
}
