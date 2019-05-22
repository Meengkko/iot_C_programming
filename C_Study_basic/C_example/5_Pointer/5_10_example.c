// 1차원 포인터 배열과 이중 포인터
#include <stdio.h>
#define Y 7

int main(){
	int i;
	char *pWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	char **pD;

	pD = pWeek;

	printf("&pWeek=%p, pWeek=%p, *pWeek=%p, **pWeek=%c\n", &pWeek, pWeek, *pWeek, **pWeek);
	printf("&pD = %p, pD = %p, *pD = %p, **pD = %c\n", &pD, pD, *pD, **pD);
	
	for(i=0; i<Y; i++){
		printf("&pD[%d] = %p, pD[%d] = %p, %s\n", i, &pD[i], i, pD[i], pD[i]);
	}

	pD++;
	printf("&pD = %p, pD = %p, *pD = %p, **pD = %c\n", &pD, pD, *pD, **pD);

	return 0;
}
