//UTF-8 �ڵ� ������(65001) ����
#include <windows.h>
#include <stdio.h>

void main(){
	char *s = u8"A��";

	SetConsoleOutputCP(65001);
	printf(u8"�����ڵ�(UTF-9)\n");

	printf("sizeof = %d\n", sizeof(u8"A��"));
	printf("s = %s\n", s);
	printf("%c %c%c%c\n",s[0],s[1],s[2],s[3]);
	printf("%hhx, %hhx, %hhx, %hhx, %hhx\n", s[0], s[1], s[2], s[3], s[4]);
}

