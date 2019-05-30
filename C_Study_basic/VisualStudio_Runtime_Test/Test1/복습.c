#include <stdio.h>
#pragma warning (disable:4996)

void swap(int* ptr1, int* ptr2);

void main() {
	
	int num1;
	int num2;
	int numArray[3][3];
	
	int* strings[3] = { "I", "like", "you" }; // 포인터 배열
	int (*arrptr)[3] = numArray; // sizeof(int) x 3의 크기만큼 주소 값이 증가하는 포인터 형(배열 포인터)
	
	printf("two integer(num1 num2): ");
	scanf("%d %d", &num1, &num2);

	printf("\ninput_integer before swap: %d %d\n\n", num1, num2);

	swap(&num1, &num2);

	printf("integer after swap: %d %d\n", num1, num2);

	printf("\nnumArray = %p\n", numArray);
	printf("numArray + 1 = %p\n", numArray + 1);
	printf("numArray + 2 = %p\n", numArray + 2);

	printf("\narrptr = %p\n", arrptr);
	printf("arrptr + 1 = %p\n", arrptr + 1);
	printf("arrptr + 2 = %p\n", arrptr + 2);
}

void swap(int* ptr1, int* ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}