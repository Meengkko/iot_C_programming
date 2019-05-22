// 이중 포인터
#include <stdio.h>

int main(){
	int a =10;
	int *pI = &a;
	int **pD = &pI;

	pI = &a;
	pD = &pI;

	printf("\npI 주소, 값\n");
	printf(" &a = %p\n", &a);
	printf("&pI = %p\n", &pI);
	printf(" pI = %p\n", pI);
	printf(" *pI = %d\n", *pI);

	printf("\npD 주소, 값\n");
	printf("&pD = %p\n", &pD);
	printf("pD = %p\n", pD);
	printf("*pD = %p\n", *pD);
	printf("**pD = %d\n", **pD);

	printf("\npD를 이용한 변수 a값 변경\n");
	**pD = 20;
	printf("**pD = %d\n", **pD);
	printf("  a = %d\n", a);

	return 0;
}
