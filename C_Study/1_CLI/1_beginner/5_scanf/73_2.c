#include <stdio.h>

void main(){

	// 변수 선언을 할 때는 줄을 바꾸면서 하는 것이 좋다
		
	int input_num1 
	int input_num2
	int input_num3
   	int	result;
		
	printf("세 개의 정수를 입력하세요(정수1 정수2 정수3): ");
  	scanf("%d %d %d",&input_num1, &input_num2, &input_num3);

	result = (input_num1*input_num2)+input_num3;

	// 유지보수성을 위해 Expression에 괄호를 붙이는 습관이 중요하다.

	printf("\n");
	printf("정수1x정수2+정수3\n\n");
	printf("result = %d\n", result);
}
