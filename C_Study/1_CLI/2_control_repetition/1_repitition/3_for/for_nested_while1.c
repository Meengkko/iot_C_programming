#include <stdio.h>

void main(){
	int i;
	int j;
	int k=0;

	for(i=0; i<5;){
		printf("1�̻��� ������ �ϳ� �Է��Ͻʽÿ�. :");
		scanf("%d",&j);
		for(;j>=1;){
			i = i + 1;
			k = k + j;
			j = -1;
		}
	}
	printf("\n%d",k);
}
