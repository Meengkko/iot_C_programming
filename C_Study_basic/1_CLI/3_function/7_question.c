#include <stdio.h>

void main(){

	int number_n;
	int number_k=0;
	int powOfTwo = 2;

	printf("��� n �Է�: ");
	scanf("%d",&number_n);

	while(1){
		if(number_n<powOfTwo){
			printf("������ �����ϴ� k�� �ִ��� %d",number_k);
			break;
		}
		number_k++;
		powOfTwo = powOfTwo*2;
	}
}
