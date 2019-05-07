#include <stdio.h>

void main(){
	
	int input_num1, input_num2, input_num3, result;
		
	printf("세 개의 정수를 입력하세요(정수1 정수2 정수3): ");
  	scanf("%d %d %d",&input_num1, &input_num2, &input_num3);

	result = (input_num1-input_num2)*(input_num2+input_num3)*(input_num3%input_num1);
	printf("\n");
	printf("(정수1-정수2)x(정수2+정수3)x(정수3%%정수1)\n\n");
	printf("result = %d\n", result);
}
