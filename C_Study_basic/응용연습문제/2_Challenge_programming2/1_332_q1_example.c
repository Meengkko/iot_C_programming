#include <stdio.h>

void find_odd(int *ptr, int size);
void find_even(int *ptr, int size);

void main(void){
	int input_number[10];
	int index;

	printf("총 10개의 숫자 입력\n");

	for(index=0; index<10; index++){
		printf("입력: ");
		scanf("%d",&input_number[index]);
	}

	printf("홀수 출력: ");
	find_odd(input_number, 10);
	printf("\b\b \n");

	printf("짝수 출력: ");
	find_even(input_number, 10);
	printf("\b\b ");
}

void find_odd(int *ptr, int size){

	for(int i=0; i<size; i++){
		if(ptr[i] % 2 != 0){
			printf("%d, ", ptr[i]);
		}
	}
}

void find_even(int *ptr, int size){

	for(int i=0; i<size; i++){
		if(ptr[i] % 2 == 0){
			printf("%d, ", ptr[i]);
		}
	}
}


