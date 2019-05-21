#include <stdio.h>
#pragma warning (disable:4996)

void main(){
//	Visual Studio C 컴파일러인 경우는 초기화 하지 않을 경우에
//	공백으로 초기화
//	문자열을 선언할 때 사이즈는 문자열의 크기보다 1이 더 커야한다. (NULL 값을 고려하기 위하여)
	char str[6];

	str[0] = 'G';
	str[1] = 'o';
	str[2] = 'o';
	str[3] = 'd';
	str[4] = '!';
//	str[5] = '\0';

	printf("배열 str의 크기: %d\n", sizeof(str));
//	printf("널 문자 문자형 출력: %c \n", str[13]);
//	printf("널 문자 정수형 출력: %d \n", str[13]);

//	str[12]='?';
	printf("문자열 출력: %s\n", str);
}
