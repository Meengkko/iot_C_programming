#include <stdio.h>

void main(){
	
	int numerator, denominator ,portion ,remainder;
		
	printf("�� ������ �Է��ϼ���(������,����): ");
  	scanf("%d,%d",&numerator, &denominator);

	portion = numerator/denominator;
	remainder = numerator%denominator;

	printf("\n");
	printf("��: %d, ������: %d", portion, remainder);
}
