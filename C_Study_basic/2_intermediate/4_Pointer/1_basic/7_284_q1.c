#include <stdio.h>

void main(){

	int num = 10;
	int *ptr1 = &num; // �����͸� ������ ���� �������� �ƴ� �ּҰ��� �ǹ��Ѵ�.
	int *ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;

	printf("%d\n", num); // 12 ���

}
