#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");
	// a���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� ������ ���� ���ٿ� ���⸦ �Ѵ�.
	// FILE* fp = fopen("data1.txt", "at");
	FILE* fp = fopen("data2.txt", "at");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);
	 // fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}