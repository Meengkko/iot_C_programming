// ���� ������
#include <stdio.h>

int main(){
	int a =10;
	int *pI = &a;
	int **pD = &pI;

	pI = &a;
	pD = &pI;

	printf("\npI �ּ�, ��\n");
	printf(" &a = %p\n", &a);
	printf("&pI = %p\n", &pI);
	printf(" pI = %p\n", pI);
	printf(" *pI = %d\n", *pI);

	printf("\npD �ּ�, ��\n");
	printf("&pD = %p\n", &pD);
	printf("pD = %p\n", pD);
	printf("*pD = %p\n", *pD);
	printf("**pD = %d\n", **pD);

	printf("\npD�� �̿��� ���� a�� ����\n");
	**pD = 20;
	printf("**pD = %d\n", **pD);
	printf("  a = %d\n", a);

	return 0;
}
