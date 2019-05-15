#include <stdio.h>

void main(){
	int i;
	int j;
	int k=0;

	for(i=0; i<5;){
		printf("1이상의 정수를 하나 입력하십시오. :");
		scanf("%d",&j);
		for(;j>=1;){
			i = i + 1;
			k = k + j;
			j = -1;
		}
	}
	printf("\n%d",k);
}
