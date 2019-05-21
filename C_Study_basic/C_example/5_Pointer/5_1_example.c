// 포인터에 일반 변수의 주소 저장

#include <stdio.h>

int main(){
	int a = 10;
	int *pI;
	pI = &a;

	printf("\n  a = %d\n", a);
	printf(" &a = %p\n", &a);
	printf("&pI = %p\n", &pI);
	printf(" pI = %p\n", pI);
	printf(" *p = %d\n\n", *pI);

	*pI = 20;
	printf("*pI = %d\n",*pI);
	printf("  a = %d\n",a);

	return 0;
}
