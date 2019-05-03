#include <stdio.h>

void main(){
	int first_number, second_number;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d",&first_number);
	printf("두번째 수를 입력하세요: ");
	scanf("%d",&second_number);

	printf("\n%d+%d=%d\n",first_number,second_number,first_number+second_number);
	printf("%d-%d=%d\n",first_number,second_number,first_number-second_number);
	printf("%d*%d=%d\n",first_number,second_number,first_number*second_number);
	printf("%d/%d=%d\n",first_number,second_number,first_number/second_number);
	printf("%d%%%d=%d\n",first_number,second_number,first_number%second_number);
}
