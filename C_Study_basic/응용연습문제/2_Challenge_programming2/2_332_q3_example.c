#include <stdio.h>

void main(void){
	int input_number[10];
	int EvenOdd;
	int FrontIndex=0;
	int RearIndex=9;

	printf("�� 10���� ���� �Է�\n");

	for(int index=0; index<10; index++){
		printf("�Է�: ");
		scanf("%d",&EvenOdd);

		if(EvenOdd % 2 != 0){
			input_number[FrontIndex] = EvenOdd;
			FrontIndex = FrontIndex + 1;
		}else{
			input_number[RearIndex] = EvenOdd;
			RearIndex = RearIndex - 1;
		}
	}

	printf("�迭 ����� ��� : ");
	
	FrontIndex = 0;
	while(FrontIndex < 10){
		printf("%d ",input_number[FrontIndex]);
		FrontIndex = FrontIndex + 1;
	}
}
