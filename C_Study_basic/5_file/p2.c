#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	FILE* fp = fopen("mystory.txt", "at");
	if(fp==NULL){
		puts("���Ͽ��� ����");
		return (-1);
	}
	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);

	fclose(fp);
}
