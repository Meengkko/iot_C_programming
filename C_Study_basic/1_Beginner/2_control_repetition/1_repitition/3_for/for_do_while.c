#include <stdio.h>

void main(){
	int i;
	int j = 0;
	int k;
	int l;

	//do_while���� ����ϴ� ���� for������ Ǯ�� ����2)
	for(i=1;i<=50;i++){
		j = j + (2*i);
	}
	printf("\n%d\n\n",j);

	//do_while���� ����ϴ� ���� for������ Ǯ�� ����3)
	for(k=2;k<10;k++){
		printf("\n== %d�� ==\n\n",k);
		for(l=1;l<10;l++){
			printf("%d x %d = %d\n",k,l,k*l);
		}
	}
}
