#include <stdio.h>
#include <stdio.h>

void main(){
	int ch;
	
	ch = getchar(); // ���� ���� �Է�
	printf("ch = %c, %x, %d\n", ch, ch, ch);
	putchar(ch);
	putchar('\n');

	ch = _getch(); // ����� ���� �Է�
	printf("ch = %c, %x, %d\n", ch, ch, ch);
}
