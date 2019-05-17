#include <stdio.h>

void times_print(int number1, int number2);

void main(){

	int startIndex = 0;
	int endIndex = 0;

	scanf("%d %d",&startIndex,&endIndex);

	times_print(startIndex,endIndex);
}

void times_print(int number1, int number2){

	int times;
	int temp;				// 여기서부터 
	
	if(number1>number2){
		temp = number2;
		number2 = number1;
		number1 = temp;
	}						// 여기까지 추가하였습니다.

	for(number1; number1<=number2; number1++){
		for(times=1; times<=9; times++){
			printf("%d * %d = %d\n",number1,times,number1*times); 
		}
		putchar('\n');
	}
}
