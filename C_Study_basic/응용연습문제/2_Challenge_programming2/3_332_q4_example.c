#include <stdio.h>

void is_palindrome(char *arr, int size);

void main(void){
	
	char input_string[100];
	int length=0;

	printf("���ڿ� �Է�: ");
	scanf("%s", input_string);

	while(input_string[length]!='\0'){
		length = length + 1;
	}
	is_palindrome(input_string, length);
}

void is_palindrome(char *arr, int size){
	
	for(int i=0; i<size/2; i++){
		if(arr[i] != arr[size-i-1]){
			printf("ȸ���� �ƴմϴ�.");
			return;
		}
	}
	printf("ȸ�� �Դϴ�.");
}
