#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int main() {

	system("chcp 949");

	FILE* fp = fopen("mystory.txt", "at");
	if(fp==NULL){
		puts("ÆÄÀÏ¿ÀÇÂ ½ÇÆĞ");
		return (-1);
	}
	fputs("#Áñ°Ü¸Ô´Â À½½Ä: Â«»Í, ÅÁ¼öÀ° \n", fp);
	fputs("#Ãë¹Ì: Ãà±¸ \n", fp);

	fclose(fp);
}
