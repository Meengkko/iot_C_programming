#include <stdio.h>

int main(){

		int number1;

		printf("������ �ϳ� �Է��ϼ���. ");
		scanf("%d",&number1);

		switch (number1)
		{
			case 1:
			case 2:
				printf("�Է¹��� ���ڴ� 1 �Ǵ� 2�Դϴ�.\n");
				break;
			case 3:
			case 4:
				printf("�Է¹��� ���ڴ� 3 �Ǵ� 4�Դϴ�.\n");
				break;
			default:
				printf("default\n");
				break;
		}

		if(number1 == 1 || number1 == 2)
				printf("�Է¹��� ���ڴ� 1 �Ǵ� 2�Դϴ�.\n");
		else if(number1 == 3 || number1 == 4)
				printf("�Է¹��� ���ڴ� 3 �Ǵ� 4�Դϴ�.\n");
		else
				printf("default\n");
		// if���� ����� ��� ������ ������ ������ �־���ϴ� ���ŷο���
		// �ִ�.
		return 0;
}
