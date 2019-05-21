#include <stdio.h>

void main(){

	int num = 10;
	int *ptr1 = &num; // 포인터를 선언할 때는 참조값이 아닌 주소값을 의미한다.
	int *ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num); // 12 출력

}
