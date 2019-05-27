#include <stdio.h>
#include <stdio.h>

void main(){
	int ch;
	
	ch = getchar(); // 버퍼 문자 입력
	printf("ch = %c, %x, %d\n", ch, ch, ch);
	putchar(ch);
	putchar('\n');

	ch = _getch(); // 비버퍼 문자 입력
	printf("ch = %c, %x, %d\n", ch, ch, ch);
}
