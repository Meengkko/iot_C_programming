#include <stdio.h>

void main(){
	int input_integer = 9999;
	int sum_of_input_integer = 0;

	while(input_integer != 0)
	{
			printf("������ �ϳ� �Է��Ͻʽÿ�.(������ ���÷��� 0�� �Է��Ͻʽÿ�): ");
			scanf("%d",&input_integer);

			sum_of_input_integer = sum_of_input_integer + input_integer;
	}
	printf("\n�Է��Ͻ� ������ ������ %d �Դϴ�.",sum_of_input_integer);
}
