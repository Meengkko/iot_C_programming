#include <stdio.h>

void main(){
	int first_number, second_number;

	printf("ù��° ���� �Է��ϼ���: ");
	scanf("%d",&first_number);
	printf("�ι�° ���� �Է��ϼ���: ");
	scanf("%d",&second_number);

	printf("\n%d+%d=%d\n",first_number,second_number,first_number+second_number);
	printf("%d-%d=%d\n",first_number,second_number,first_number-second_number);
	printf("%d*%d=%d\n",first_number,second_number,first_number*second_number);
	printf("%d/%d=%d\n",first_number,second_number,first_number/second_number);
	printf("%d%%%d=%d\n",first_number,second_number,first_number%second_number);
}
