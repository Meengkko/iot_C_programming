#include <stdio.h>
#pragma warning (disable:4996)

void main(int argc, char* argv[]) {

	system("chcp 949");

	FILE * fp1 = fopen(argv[1],"rt");
	FILE * fp2 = fopen(argv[2],"rt");

	int ch_d1;
	int ch_d2;

	while (1) {
		
		ch_d1 = fgetc(fp1);
		ch_d2 = fgetc(fp2);

		if(ch_d1 != ch_d2){
			fputs("�� ������ ��ġ���� �ʽ��ϴ�.",stdout);
			break;
		}

		if(ch_d1 == EOF && ch_d2 == EOF){
			fputs("�� ������ ������ ��ġ�մϴ�.", stdout);
			break;
		}
	}
	
	fclose(fp1);
	fclose(fp2);
}
