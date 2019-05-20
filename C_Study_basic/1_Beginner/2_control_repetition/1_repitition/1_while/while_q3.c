#include <stdio.h>

void main(){
	int input_integer = 9999;
	int sum_of_input_integer = 0;

	while(input_integer != 0)
	{
			printf("정수를 하나 입력하십시오.(총합을 보시려면 0을 입력하십시오): ");
			scanf("%d",&input_integer);

			sum_of_input_integer = sum_of_input_integer + input_integer;
	}
	printf("\n입력하신 정수의 총합은 %d 입니다.",sum_of_input_integer);
}
