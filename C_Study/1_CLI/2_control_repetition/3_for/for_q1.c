#include <stdio.h>

void main(){
	int start_integer;
	int end_integer;
	int totalSum=0;

	printf("�� ������ �Է��Ͻʽÿ�.(��:n1 n2)(����:n1 > n2): ");
    scanf("%d %d",&start_integer, &end_integer);

	for(start_integer; start_integer <= end_integer; start_integer++){
		totalSum = totalSum + start_integer;
	}
	printf("\n�� ������ �����Ͽ� ���̿� �ִ� ��� ���� ���� : %d",totalSum);
}
