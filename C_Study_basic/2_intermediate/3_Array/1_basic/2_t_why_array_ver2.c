#include <stdio.h>
/*
=======ȭ�� �䱸 ����=======
ù ��° ���ڸ� �Է��ϼ���: 23
�� ��° ���ڸ� �Է��ϼ���: 34
�� ��° ���ڸ� �Է��ϼ���: 45
�� ��° ���ڸ� �Է��ϼ���: 56
�ټ� ��° ���ڸ� �Է��ϼ���: 67
����: 225, ���: 45
�� ��° ���ڴ� 45 �Դϴ�. 
*/


void main(){

	int number, total=0, average, index;
	int max_count=5;

	for(index=0;index<max_count;index++){
		printf("%d�� ���ڸ� �Է��ϼ���: ", index+1);
		scanf("%d",&number);
		total = total + number;
	}
	/* �Ʒ� ȭ�� ��� �䱸������ �����ϱⰡ �����
	   printf("�Է��� ����(�Է� ������� ����): %d %d %d %d %d\n",
	  							 number1, number2, number3, number4, number5);

	   �Է��� ����(�Է� ������� ����): 23 34 45 56 67
	*/

	average = total/max_count;
	printf("����: %d, ���: %d\n", total, average);
	/* �Ʒ� ȭ�� ��� �䱸������ ���� ��Ĵ�� �� �Ϳ� �����ϱⰡ �����
 	   ����° ���ڴ� 3 �Դϴ�.
	   printf("�� ��° ���ڴ� %d �Դϴ�.", number3);
	*/
}
