#include <stdio.h>
int main(){
	
	wchar_t			uName1[] = L"AB����"; // UTF-16 �����ڵ� ���ڿ� ���
	unsigned short	uName2[] = u"AB����"; // UTF-16 �����ڵ� ���ڿ� ���
	unsigned int 	uName3[] = U"AB����"; // UTF-32 �����ڵ� ���ڿ� ���
	int i;

	printf("sizeof(uName1) = %d\n", sizeof(uName1));
	for(i=0; uName1[i] != 0; i++)
		printf("uName1[%d]: %04hx\n", i, uName1[i]);
	printf("uName1[%d]: %04hx\n", uName1[i]);
	
	printf("sizeof(uName2) = %d\n", sizeof(uName2));
	for(i=0; uName1[i] != 0; i++)
		printf("uName2[%d]: %04hx\n", i, uName2[i]);
	printf("uName2[%d]: %04hx\n", uName2[i]);
	
	printf("sizeof(uName3) = %d\n", sizeof(uName3));
	for(i=0; uName3[i] != 0; i++)
		printf("uName3[%d]: %04hx\n", i, uName3[i]);
	printf("uName3[%d]: %04hx\n", uName3[i]);

}
