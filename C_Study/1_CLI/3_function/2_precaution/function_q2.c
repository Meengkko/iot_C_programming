#include <stdio.h>

int MaxWithinThree(int num1, int num2, int num3);
int MinWithinThree(int num1, int num2, int num3);

void main(void){

	int input_integer1;
	int input_integer2;
	int input_integer3;
	int maxForPrint;
	int minForPrint;

	printf("�� ������ �Է��Ͻÿ�.(����1 ����2 ����3): ");
	scanf("%d %d %d",&input_integer1,&input_integer2,&input_integer3);

	maxForPrint = MaxWithinThree(input_integer1,input_integer2,input_integer3);
	minForPrint = MinWithinThree(input_integer1,input_integer2,input_integer3);
	printf("\n�� ���� �� ���� ū ���� %d �Դϴ�.\n",maxForPrint);
	printf("�� ���� �� ���� ���� ���� %d �Դϴ�.",minForPrint);
}

int MaxWithinThree(int num1, int num2, int num3){

	if(num1>num2){
		if(num1>num3){
			return num1;
		}
	}

	if(num2>num3){
		return num2;
	}else{
		return num3;
	}
}

int MinWithinThree(int num1, int num2, int num3){;

	if(num1<num2){
		if(num1<num3){
			return num1;
		}
	}
	if(num2<num3){
		return num2;
	}else{
		return num3;
	}
}

