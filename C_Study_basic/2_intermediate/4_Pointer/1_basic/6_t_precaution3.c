#include <stdio.h>

void main(){
	
	int num=7;
	double *pnum;

	// 포인터 변수는 같은 타입의 변수의 주소만 할당받을 수 있다.
	// 상황에 따라 다양한 에러가 발생한다.
	*pnum = &num;	

	printf("num: %d\n", num);
	printf("*pnum: %llf\n", *pnum);
}
