#include <windows.h> // SetConsoleOutputCP()
#include <stdio.h>

void main(){
	char *s ="A��";

	SetConsoleOutputCP(949);
	printf("��Ƽ ����Ʈ(MBCS, ANSI/OEM 949)\n");

	printf("sizeof = %d\n", sizeof("A��"));
	printf("s = %s\n",s);
	printf("%c %c%c\n",s[0],s[1],s[2]);
	printf("%hhx, %hhx, %hhx, %hhx\n",s[0],s[1],s[2],s[3]);
}
