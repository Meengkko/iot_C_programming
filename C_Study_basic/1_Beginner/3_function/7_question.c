#include <stdio.h>

void main(){

	int number_n;
	int number_k=0;
	int powOfTwo = 2;

	printf("상수 n 입력: ");
	scanf("%d",&number_n);

	while(1){
		if(number_n<powOfTwo){
			printf("공식을 만족하는 k의 최댓값은 %d",number_k);
			break;
		}
		number_k++;
		powOfTwo = powOfTwo*2;
	}
}
