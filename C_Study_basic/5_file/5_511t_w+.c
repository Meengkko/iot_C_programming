#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9

void main() {

	int ch, i;

	system("chcp 949");
	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش� ������ ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "w+");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	 // fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}