#include <stdio.h>

void find_odd(int *ptr, int size);
void find_even(int *ptr, int size);

void main(void){
	int input_number[10];
	int index;

	printf("�� 10���� ���� �Է�\n");

	for(index=0; index<10; index++){
		printf("�Է�: ");
		scanf("%d",&input_number[index]);
	}

	printf("Ȧ�� ���: ");
	find_odd(input_number, 10);
	printf("\b\b \n");

	printf("¦�� ���: ");
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


