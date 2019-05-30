#include <stdio.h>

void SwapIntPtr1(int *p1, int *p2){

		int *temp = p1;
		p1 = p2;
		p2 = temp;
}

void SwapIntPtr2(int **dp1, int **dp2){

		int *temp = *dp1;
		*dp1 = *dp2;
		*dp2 = temp;
}

void main(){
	int num1=10, num2=20;
	int *ptr1, *ptr2;
	ptr1=&num1, ptr2=&num2;
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr1(ptr1, ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

	SwapIntPtr2(&ptr1, &ptr2);
	printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

}
