#include <stdio.h>

int isSelfNum(int number);
int generator(int series);

void main(){

	int starter = 1;
	int sumSelfNum = 0;

	for(starter;starter<=5000;starter++){
		sumSelfNum = sumSelfNum + isSelfNum(starter);
	}
	printf("%d",sumSelfNum);
}

int generator(int number){

	int temp;
	int digitSum=0;

	temp = number;

	while(number>0){
		digitSum = digitSum + (number%10);
		number = number/10;	
	}
	
	digitSum = digitSum + temp;
	
	return digitSum;
}

int isSelfNum(int number){

	int i;

	for(i=0;i<number;i++){
		if(generator(i) == number){
			return 0;
		}
	}
	return number;
}
