#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 6

int main() {

	int ch, i;

	system("chcp 949");
	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش� ������ ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "r+");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('X', fp);
	fputc('Y', fp);
	fputc('Z', fp);

	// fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}

	return 0;
}