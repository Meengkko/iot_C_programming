//UTF-8 코드 페이지(65001) 설정
#include <windows.h>
#include <stdio.h>

void main(){
	char *s = u8"A한";

	SetConsoleOutputCP(65001);
	printf(u8"유니코드(UTF-9)\n");

	printf("sizeof = %d\n", sizeof(u8"A한"));
	printf("s = %s\n", s);
	printf("%c %c%c%c\n",s[0],s[1],s[2],s[3]);
	printf("%hhx, %hhx, %hhx, %hhx, %hhx\n", s[0], s[1], s[2], s[3], s[4]);
}

