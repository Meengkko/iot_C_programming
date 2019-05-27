#include <stdio.h>
// Call by Value
// ����, �Լ� ����� ����� �Ϲ������� return�Ѵ�.
int SquareByValue(int num){
	return num*num; // ���� ����� return ������ ��ȯ
}

// Call by Reference
// ����, �Լ��� ����� 2�� �̻��� �� ����� �� �ִ�.
// �Լ��� ���� ũ�Ⱑ Ŭ ��쿡 �޸� ȿ������ ���ؼ� ����Ѵ�.
// �̷��� ��� ���� ���� �Լ� ������ ���������� ����Ǿ������� �ǹ̷�
// ����� �� �ִ�.
void SquareByReference(int *ptr){ // ���⼭ *ptr�� �ּҰ����μ� ����Ǿ���.
//	int num = *ptr;
//	*ptr = num*num; // �������� ���� �ּҹ����� ���� ���� 
					// ���� ������� �ص� ok
					
	*ptr = *ptr * (*ptr); // *ptr�� ���� ��
//	step1] *ptr = 10 * (*ptr);
//	step2] *ptr = 10 * 10;
//	step3] *ptr = 100;
}

void main(){
	int num = 10;
	printf("%d \n", SquareByValue(num));
	printf("%d \n", num);
	SquareByReference(&num);
	printf("%d \n", num);
}
