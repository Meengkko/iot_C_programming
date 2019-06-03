#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main(){
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	system("chcp 949");

	/**** case1 ****/
	strncpy(str2, str1, 6);
	puts(str2);

	/**** case2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/**** case3 ****/
	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
}
