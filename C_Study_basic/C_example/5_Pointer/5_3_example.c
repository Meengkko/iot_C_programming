// 1���� ���� �迭 �ʱ�ȭ�� ������ �ʱ�ȭ�� ����

#include <stdio.h>
int main(){

	char cA[] = "ABCD";
	char *pA = "ABCD";

	printf("cA = %s\n", cA);
	printf("pA = %s\n", pA);

	*cA = 'a'; // cA[0] = 'a';
	printf("cA = %s\n", cA);

	*pA = 'b'; // ���� �ð� ����
	printf("pA = %s\n", 

	return 0;
}
