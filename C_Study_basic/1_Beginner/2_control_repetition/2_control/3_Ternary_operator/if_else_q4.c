#include <stdio.h>

void main(){
	
	int input_integer1;
	int input_integer2;
	int subtraction;

	printf("������ �� �� �Է��Ͻʽÿ�.(����1,����2): ");
	scanf("%d,%d",&input_integer1,&input_integer2);

	subtraction = input_integer1 - input_integer2;

	subtraction = subtraction > 0 ? subtraction : subtraction*(-1);	

	printf("\n �� ������ ���� %d�Դϴ�.", subtraction);
}
