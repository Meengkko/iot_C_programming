#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main(){
	char str[20];

	system("chcp 949");

	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
}
