#include <stdio.h>
#include <windows.h>

#define NAME		"ȫ�浿"
#define AGE			24
#define PRINT_ADDR			puts("�ּ�: ��⵵ ���ν�");

void main(){

	SetConsoleOutputCP(949);

	printf("�̸�: %s \n", NAME);
	printf("����: %d \n", AGE);
	PRINT_ADDR;
}
