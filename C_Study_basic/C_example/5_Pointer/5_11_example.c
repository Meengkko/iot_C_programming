// 삼중 포인터
#include <stdio.h>

int main(){
	int a = 10;
	int *pI = &a;
	int **pD = &pI;
	int ***pT = &pD;

	printf("\n 포인터 변수 자신의 주소 출력\n");
	printf(" &a = %p\n", &a);
	printf("&pI = %p\n", &pI);
	printf("&pD = %p\n", &pD);
	printf("&pT = %p\n", &pT);

	printf("\n 포인터 변수에 저장된 주소 출력\n");
	printf("pI = %p\n", pI);
	printf("pD = %p\n", pD);
	printf("pT = %p\n", pT);

	printf("\n 값 출력\n");
	printf("    a = %d\n", a);
	printf("  *pI = %d\n", *pI);
	printf(" **pD = %d\n", **pD);
	printf("***pT = %d\n", ***pT);
	
	printf("\n***pT=20에 의한 값 변경\n");
	***pT = 20;
	printf("    a = %d\n", a);
	printf("  *pI = %d\n", *pI);
	printf(" **pD = %d\n", **pD);
	printf("***pT = %d\n", ***pT);
	return 0;
}
