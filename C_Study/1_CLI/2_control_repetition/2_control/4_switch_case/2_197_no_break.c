#include <stdio.h>

void main(){
	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);
	float my_pi;

	// switch ���� ������ ������ ��Ī�� �Ǵ� case�� �̵��� �� ���� �̷������.
	// �׸��� Ư���� break�� ������ �ʴ� �̻� ������ ��� ���ɹ��� �����Ѵ�.
	// switch ()�� ������ �Ϲ������� ������(INTEGRAL) Ÿ��(���ڸ� ǥ���ϴ� char ����)��
	// ����ϴ� ���� ��Ģ�̴�.
	switch(sel){
		case 'M': // if(sel=='M'||sel=='m')
		case 'm':
			printf("Morning\n");
			break;	
		case 'A':
			printf("Good ");
		case 'a':
			printf("Afternoon\n");
			break;	
		case 'E':
		case 'e':
			printf("Evening\n");
			break;	
		default:
			printf("I don't know!\n");
	}
	// switch()�� ������ �Ǽ����̱� ������ ������ ������ �߻��Ѵ�.
	/*
	switch(my_pi){
		case 1.11:
			printf("case 1.11\n");
		case 3.14:
			printf("case 3.14\n");
		defalut:
			printf("default!\n");
	}
	*/
}