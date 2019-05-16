#include <stdio.h>

void main(){
	int i;
	int j = 0;
	int k;
	int l;

	//do_while문을 사용하는 문제 for문으로 풀기 문제2)
	for(i=1;i<=50;i++){
		j = j + (2*i);
	}
	printf("\n%d\n\n",j);

	//do_while문을 사용하는 문제 for문으로 풀기 문제3)
	for(k=2;k<10;k++){
		printf("\n== %d단 ==\n\n",k);
		for(l=1;l<10;l++){
			printf("%d x %d = %d\n",k,l,k*l);
		}
	}
}
