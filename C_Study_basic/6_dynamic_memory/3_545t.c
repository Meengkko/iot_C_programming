#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma warning (disable:4996)

void main() {

	system("chcp 949");

	int num1;
	int* ptr1 = &num1;
	void* ptr2 = malloc(sizeof(int));
	int* ptr3 = malloc(sizeof(int));


	*ptr1 = 10;

	printf("*ptr1 = %d\n", *ptr1);

	// void���� int ���� �Ҵ��Ϸ��� �߱� ������ ���� �߻�
	// *ptr2 = 10;

	*ptr3 = 10;
	printf("*ptr3 = %d\n", *ptr3);
}
