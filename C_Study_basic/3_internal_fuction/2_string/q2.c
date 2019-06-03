#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main(){
	char str1[20];
	char str2[20];
	char str3[40];

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	strncpy(str3, str1, (strlen(str1) - 1));
	str3[strlen(str1)-1] = '\0';
	strncat(str3, str2, (strlen(str2)-1));

	fputs(str3, stdout);
}