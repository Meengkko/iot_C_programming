#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char my_password[] = "ghfjdksl";
	char input_password[] = "ghfjdksl";

	system("chcp 949");

	if (my_password == input_password) {
		puts("�н����尡 ��ġ�մϴ�.");
	}else{
		puts("�н����尡 ����ġ�մϴ�.");
	}
}
