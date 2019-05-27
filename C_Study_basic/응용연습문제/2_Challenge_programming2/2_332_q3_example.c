#include <stdio.h>

void main(void){
	int input_number[10];
	int EvenOdd;
	int FrontIndex=0;
	int RearIndex=9;

	printf("총 10개의 숫자 입력\n");

	for(int index=0; index<10; index++){
		printf("입력: ");
		scanf("%d",&EvenOdd);

		if(EvenOdd % 2 != 0){
			input_number[FrontIndex] = EvenOdd;
			FrontIndex = FrontIndex + 1;
		}else{
			input_number[RearIndex] = EvenOdd;
			RearIndex = RearIndex - 1;
		}
	}

	printf("배열 요소의 출력 : ");
	
	FrontIndex = 0;
	while(FrontIndex < 10){
		printf("%d ",input_number[FrontIndex]);
		FrontIndex = FrontIndex + 1;
	}
}
