#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	int ch, i;

	system("chcp 949");
	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش� ������ ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	// FILE* fp = fopen("data.txt", "rt");
	FILE* fp = fopen("no_file.txt", "rt");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}
	// fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}

	return 0;
}