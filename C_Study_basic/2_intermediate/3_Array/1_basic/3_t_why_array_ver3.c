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

	int number[5], total=0, average, index;
	const int max_count=5;

	for(index=0;index<max_count;index++){
		printf("%d�� ���ڸ� �Է��ϼ���: ", index+1);
		scanf("%d",&number[index]);
		total = total + number[index];
	}

	for(index=0;index<max_count;index++){
		printf("%d ", number[index]);
	}

	average = total/max_count;
	printf("����: %d, ���: %d\n", total, average);
	printf("%d ��° ���ڴ� %d �Դϴ�.\n",3, number[2]);

	printf("�ٽ� ��ȸ�ϰ� ���� ���� ������ �Է��ϼ���: ");
	scanf("%d", &index);
	printf("%d ��° ���ڴ� %d �Դϴ�.", index, number[index-1]);
}
