#include <stdio.h>

void main(){
	
	int integerSeries;

	printf("\n1�̻� 100�̸��� ���� ��\n\n7�� ����̰ų� 9�� ����� ������ ��µ˴ϴ�.\n\n==>\n\n");

	for(integerSeries=1; integerSeries<100; integerSeries++){
		if(integerSeries % 7 == 0 || integerSeries % 9 == 0){
		// �߿��� �����ϼ��� �տ� �д�.
			printf("%d\t", integerSeries);
		} 
	}
}
