#include <stdio.h>
int main(){
	char cName[128];
	int i, nCount=0;

	printf("문자열 입력: ");
	//scanf("%s", cName); //scanf("%s", &cName[0]);
	scanf_s("%s", cName, sizeof(cName));

	for(i=0; cName[i]!='\0'; i++)
		nCount++;
	
	printf("sizeof(cName) = %d\n",sizeof(cName));
	printf("cName=%s, nCount=%d\n", cName, nCount);
	return 0;
}
