#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 3

void main() {

	int i, ch;

	system("chcp 949");
	// a���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� ������ ���� ���ٿ� ���⸦ �Ѵ�.
	// FILE* fp = fopen("data1.txt", "at");
	FILE* fp = fopen("data2.txt", "a+");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	 // fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}