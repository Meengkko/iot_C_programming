#include <stdio.h>

int is_prime(int numberQ);

void main(){

	int counter=0;
	int index;

	for(index=2;counter<10;index++){
		if(is_prime(index)!=0){
			printf("%d ",index);
			counter = counter+1;
		}	
	}
}

int is_prime(int numberQ){

	int divisor;

	for(divisor=2;divisor<numberQ;divisor++){
		if(numberQ%divisor==0){
			return 0;
		}
	}
	return numberQ;
}
