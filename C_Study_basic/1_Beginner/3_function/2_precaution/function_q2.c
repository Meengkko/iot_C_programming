#include <stdio.h>

int MaxWithinThree(int num1, int num2, int num3);
int MinWithinThree(int num1, int num2, int num3);

void main(void){

	int input_integer1;
	int input_integer2;
	int input_integer3;
	int maxForPrint;
	int minForPrint;

	printf("세 정수를 입력하시오.(정수1 정수2 정수3): ");
	scanf("%d %d %d",&input_integer1,&input_integer2,&input_integer3);

	maxForPrint = MaxWithinThree(input_integer1,input_integer2,input_integer3);
	minForPrint = MinWithinThree(input_integer1,input_integer2,input_integer3);
	printf("\n세 정수 중 가장 큰 값은 %d 입니다.\n",maxForPrint);
	printf("세 정수 중 가장 작은 값은 %d 입니다.",minForPrint);
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

