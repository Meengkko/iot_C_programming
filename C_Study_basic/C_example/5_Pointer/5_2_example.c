// 1차원 문자 배열과 포인터

#include <stdio.h>
int main(){

	char cName[] = "ABCD";
	char *pC;
	int i;

	printf("cName = %s\n", cName);

	printf("\n ** while **\n");
	pC = cName; // pC = &cName[0];
	while(*pC !=0){
		printf("pC = %p, *pC = %c\n", pC, *pC);
		pC++;	
	}
	printf("\n ** for1 **\n");
	for(pC = cName; *pC != 0; pC++){
		printf("pC = %p, *pC = %c\n", pC, *pC);
	}

	printf("\n ** for2 **\n");
	for(pC = cName, i=0; pC[i]!=0; i++){
		printf("pC = %p, *pC = %c\n", &pC[i], pC[i]);
	}

	return 0;
}
