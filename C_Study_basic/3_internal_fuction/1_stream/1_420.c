#include <stdio.h>
#pragma warning (disable:4996)


void main(){
	int ch1, ch2;
	char my_str[100];

	system("chcp 949");

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", my_str);
	printf("%s", my_str);
	printf("��¿Ϸ�");
	
	/*

	ch1 = getchar(); // ���� �Է�
	ch2 = fgetc(stdin); // ���� Ű �Է�

	putchar(ch1); // ���� ���
	fputc(ch2, stdout); // ���� Ű ���

	*/

}
