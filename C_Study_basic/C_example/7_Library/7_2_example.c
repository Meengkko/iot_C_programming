#include <windows.h> // SetConsoleOutputCP()
#include <stdio.h>

void main(){
	char *s ="A한";

	SetConsoleOutputCP(949);
	printf("멀티 바이트(MBCS, ANSI/OEM 949)\n");

	printf("sizeof = %d\n", sizeof("A한"));
	printf("s = %s\n",s);
	printf("%c %c%c\n",s[0],s[1],s[2]);
	printf("%hhx, %hhx, %hhx, %hhx\n",s[0],s[1],s[2],s[3]);
}
