#include <stdio.h>

void main(){
	
	int input_integer1;
	int input_integer2;
	int subtraction;

	printf("정수를 두 개 입력하십시오.(정수1,정수2): ");
	scanf("%d,%d",&input_integer1,&input_integer2);

	subtraction = input_integer1 - input_integer2;

	subtraction = subtraction > 0 ? subtraction : subtraction*(-1);	

	printf("\n 두 정수의 차는 %d입니다.", subtraction);
}
