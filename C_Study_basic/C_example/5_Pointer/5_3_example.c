// 1차원 문자 배열 초기화와 포인터 초기화의 차이

#include <stdio.h>
int main(){

	char cA[] = "ABCD";
	char *pA = "ABCD";

	printf("cA = %s\n", cA);
	printf("pA = %s\n", pA);

	*cA = 'a'; // cA[0] = 'a';
	printf("cA = %s\n", cA);

	*pA = 'b'; // 실행 시간 오류
	printf("pA = %s\n", 

	return 0;
}
