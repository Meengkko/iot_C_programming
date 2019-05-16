#include <stdio.h>

void main(){

	int string_count = 0;
	int string_index = 1;

	printf("Hello world 횟수를 입력하세요.: ");
	scanf("%d",&string_count);
	printf("\n");

	while(string_index <= string_count){
			printf("Hello world\n");
			string_index = string_index + 1;
	}
}
