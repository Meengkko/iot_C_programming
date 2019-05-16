#include <stdio.h>

void main(){
	
	int input_num1, square_of_num1; 
		
	printf("한 개의 정수를 입력하세요: ");
  	scanf("%d",&input_num1);

	square_of_num1 = input_num1*input_num1;
	printf("\n");
	printf("입력받은 정수의 제곱은 %d 입니다.", square_of_num1);
}
