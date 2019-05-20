#include <stdio.h>

void my_statistic(void);

void main(){
	my_statistic();
}

void my_statistic(void){

	int denominator=0;
	int input_integer=999;
	int totalSum=0;
	double mean;

	for(;input_integer>=0;){
	
		printf("양의 정수를 입력하시오(음수:끝) :");
		scanf("%d",&input_integer);

		if(input_integer<=100 && input_integer>=0){
			totalSum = totalSum + input_integer;
			denominator = denominator + 1;
		}else if(input_integer>100){
			printf(" 100을 초과하였습니다. 입력 범위는 1~100입니다.\n");
		}
	}
	if(denominator==0){
		printf("\n입력 받은 정수가 없습니다.");
		return;
	}
	mean = (double)totalSum/denominator;

	printf("합계:%d, 평균:%f, 개수:%d",totalSum, mean, denominator);
}
