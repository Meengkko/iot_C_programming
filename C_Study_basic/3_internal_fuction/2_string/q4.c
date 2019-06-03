#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int my_strcmp(const char* str1, const char* str2);
int my_strncmp(const char* str1, const char* str2, int number);
void my_strcpy(char* str1, const char* str2);
void my_strncpy(char* str1, const char* str2, int number);
int my_atoi(char* str1);

void main() {

	char string1[] = "my string";
	char string2[] = "my string";
	char string3[] = "your string";
	char string4[] = "your string2";
	char string5[] = "our string3";
	char string6[] = "our string";
	char string7[20];
	char string8[20];
	char numstr[] = "12345678";


	printf("%d\n", my_strcmp(string1, string2));
	printf("%d\n", my_strcmp(string3, string4));
	printf("%d\n", my_strncmp(string3, string4, 11));
	printf("%d\n", my_strncmp(string3, string4, 12));
	printf("%d\n", my_strcmp(string5, string6));
	printf("%d\n", my_strncmp(string5, string6, 10));
	// printf("%d\n", my_strcmp(string3, string4));
	my_strcpy(string7, string1);
	puts(string7);

	my_strncpy(string8, string3, 4);
	puts(string8);

	printf("%d", my_atoi(numstr));
}

int my_strcmp(const char* str1, const char* str2) {

	int i = 0;

	while (1) {
		if (*(str1 + i) > *(str2 + i)) {
			return 1;
		}
		else if (*(str1 + i) < *(str2 + i)) {
			return (-1);
		}
		else {
			if (*(str1 + i) == '\0' && *(str2 + i) == '\0') {
				return 0;
			}
			i++;
		}
	}
}

int my_strncmp(const char* str1, const char* str2, const int number) {
	
	int i = 0;

	while (i<number) {
		if (*(str1 + i) > *(str2 + i)) {
			return 1;
		}
		else if (*(str1 + i) < *(str2 + i)) {
			return (-1);
		}
		else {
			i++;
			continue;
		}
	}
	return 0;
}

void my_strcpy(char* str1, const char* str2) {

	int i = 0;

	while (*(str2+i) != '\0') {
		*(str1 + i) = *(str2 + i);
		i++;
	}
	*(str1 + i) = 0;
}

void my_strncpy(char* str1, const char* str2, int number){

	int i = 0;

	while (i < number) {
		*(str1 + i) = *(str2 + i);
		i++;
	}
	*(str1 + i) = 0;
}

int my_atoi(char* str1) {

	int length = 0;
	int outInteger = 0;
	int digit = 1;

	while (*(str1+length) != '\0') {
		length++;
	}

	length--;

	while (length >= 0) {
		outInteger = outInteger + (*(str1+length)-48) * digit;
		length--;
		digit = digit * 10;
	}

	return outInteger;
}