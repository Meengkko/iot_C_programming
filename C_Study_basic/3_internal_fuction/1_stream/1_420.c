#include <stdio.h>
#pragma warning (disable:4996)


void main(){
	int ch1, ch2;
	char my_str[100];

	system("chcp 949");

	printf("문자열을 입력하세요: ");
	scanf("%s", my_str);
	printf("%s", my_str);
	printf("출력완료");
	
	/*

	ch1 = getchar(); // 문자 입력
	ch2 = fgetc(stdin); // 엔터 키 입력

	putchar(ch1); // 문자 출력
	fputc(ch2, stdout); // 엔터 키 출력

	*/

}
