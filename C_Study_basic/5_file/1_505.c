#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");
	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش� ������ ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "wt");
	if(fp==NULL){
		puts("���� ���� ����!");
		return (-1); // �������� ���Ḧ �ǹ��ϱ� ���ؼ� -1�� ��ȯ
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	 // fclose(fp); // ��Ʈ���� ����
	if (fclose(fp) == EOF) {
		puts("���� close ����!");
	}
}