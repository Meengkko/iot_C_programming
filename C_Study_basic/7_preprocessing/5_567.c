#include <stdio.h>
#include <windows.h>
#define ADD	0
#define MIN	1

int main(){

	system("chcp 949");

	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

#if ADD //ADD�� '��'�̶��
	printf("%d + %d = %d \n", num1, num2, num1+num2);
#endif

#if MIN
	printf("%d - %d = %d \n", num1, num2, num1-num2);
#endif

	return 0;
}
