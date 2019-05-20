#include <stdio.h>

void main(){
	int input_number;
	int sumNumber=0;
	int index=1;

	while(index<=5){

		printf("1이상의 정수를 입력하세요.: ");
		scanf("%d",&input_number);

		if(input_number >= 1){
			printf("\n%d개의 정수가 입력됨\n\n", index);
			index = index + 1;
			sumNumber = sumNumber + input_number;
			input_number = -1;
		}else{
			printf("\n1 미만의 정수를 입력하셨습니다.\a\n\n");
		}
/*
		while(input_number >= 1){
				index = index + 1;
				sumNumber = sumNumber + input_number;
				input_number = -1;
		}
	}
*/
	}
	printf("\n입력받은 정수의 합은 %d 입니다.", sumNumber);
}
