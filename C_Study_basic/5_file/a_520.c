#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	//	FILE* src = fopen("Hello.docx", "rb");
	//	FILE* des = fopen("Hello_copied.docx", "wb");
	FILE* src = fopen("dyson.jpg", "rb");
	FILE* des = fopen("another_dyson.jpg", "wb");
	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����!");
		return (-1);
	}
	
	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des);
				puts("���Ϻ��� �Ϸ�");
				break;
			}
			else {
				puts("���Ϻ��� ����");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}
