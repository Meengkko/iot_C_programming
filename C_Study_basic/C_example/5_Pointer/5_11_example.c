// ���� ������
#include <stdio.h>

int main(){
	int a = 10;
	int *pI = &a;
	int **pD = &pI;
	int ***pT = &pD;

	printf("\n ������ ���� �ڽ��� �ּ� ���\n");
	printf(" &a = %p\n", &a);
	printf("&pI = %p\n", &pI);
	printf("&pD = %p\n", &pD);
	printf("&pT = %p\n", &pT);

	printf("\n ������ ������ ����� �ּ� ���\n");
	printf("pI = %p\n", pI);
	printf("pD = %p\n", pD);
	printf("pT = %p\n", pT);

	printf("\n �� ���\n");
	printf("    a = %d\n", a);
	printf("  *pI = %d\n", *pI);
	printf(" **pD = %d\n", **pD);
	printf("***pT = %d\n", ***pT);
	
	printf("\n***pT=20�� ���� �� ����\n");
	***pT = 20;
	printf("    a = %d\n", a);
	printf("  *pI = %d\n", *pI);
	printf(" **pD = %d\n", **pD);
	printf("***pT = %d\n", ***pT);
	return 0;
}
