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

	fseek(buffer, 0, SEEK_END); // �����ڸ� �� ������ �ϰ�
	
	totbytes = ftell(buffer); // �� ��ġ�� ����ϴ� ftell�Լ��� �Ἥ ������ �뷮�� �����մϴ�.

	fseek(buffer, 0, SEEK_SET); // �����ڸ� �ٽ� �� ������ �ű��

	return totbytes; // �뷮�� ��ȯ�մϴ�.
}
