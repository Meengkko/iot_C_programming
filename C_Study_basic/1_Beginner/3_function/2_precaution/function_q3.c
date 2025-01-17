#include <stdio.h>

int CompareBigger(int first, int second);
int CompareSmaller(int first, int second);
int MaxWithinFive(int num1, int num2, int num3, int num4, int num5);
int MinWithinFive(int num1, int num2, int num3, int num4, int num5);

void main(void){

	int input_integer1;
	int input_integer2;
	int input_integer3;
	int input_integer4;
	int input_integer5;
	int maxForPrint;
	int minForPrint;

	printf("다섯개의  정수를 입력하시오.(정수1 정수2 정수3 정수4 정수5): ");
	scanf("%d %d %d %d %d",&input_integer1,&input_integer2,&input_integer3,&input_integer4,&input_integer5);

	maxForPrint = MaxWithinFive(input_integer1,input_integer2,input_integer3,input_integer4,input_integer5);
	minForPrint = MinWithinFive(input_integer1,input_integer2,input_integer3,input_integer4,input_integer5);
	printf("\n다섯 정수 중 가장 큰 값은 %d 입니다.\n",maxForPrint);
	printf("다섯 정수 중 가장 작은 값은 %d 입니다.",minForPrint);
}

int MaxWithinFive(int num1, int num2, int num3, int num4, int num5){
	int maximum;
	maximum = CompareBigger(CompareBigger(CompareBigger(num1,num2),num3),CompareBigger(num4,num5));
	return maximum;	
}

int MinWithinFive(int num1, int num2, int num3, int num4, int num5){
	int minimum;
	minimum = CompareSmaller(CompareSmaller(CompareSmaller(num1,num2),num3),CompareSmaller(num4,num5));
	return minimum;	
}

int CompareBigger(int first, int second){

	if(first>second){
		return first;
	}else{
		return second;
	}
}

int CompareSmaller(int first, int second){
	if(first<second){
		return first;
	}else{
		return second;
	}
}
