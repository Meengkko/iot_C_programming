#include <stdio.h>

int main(){

		int number1;

		printf("������ �ϳ� �Է��ϼ���. ");
		scanf("%d",&number1);

		switch (number1)
		{
			case 1:
				printf("�Է¹��� ���ڴ� 1�Դϴ�.\n");
				break;
			case 2:
				printf("�Է¹��� ���ڴ� 2�Դϴ�.\n");
				break;
			case 3:
				printf("�Է¹��� ���ڴ� 3�Դϴ�.\n");
				break;
			default:
				printf("default\n");
				break;
		}
		return 0;
}
