#include <stdio.h>

void main(){
	int input_number;
	int sumNumber=0;
	int index=1;

	while(index<=5){

		printf("1�̻��� ������ �Է��ϼ���.: ");
		scanf("%d",&input_number);

		if(input_number >= 1){
			printf("\n%d���� ������ �Էµ�\n\n", index);
			index = index + 1;
			sumNumber = sumNumber + input_number;
			input_number = -1;
		}else{
			printf("\n1 �̸��� ������ �Է��ϼ̽��ϴ�.\a\n\n");
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
	printf("\n�Է¹��� ������ ���� %d �Դϴ�.", sumNumber);
}
