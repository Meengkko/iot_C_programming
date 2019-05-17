#include <stdio.h>
#include <math.h>

int isPrimenumber(int integer);

void main(){
	
	int index;
	int numPrime=0;

	for(index=2;index<=1000;index++){
		numPrime = numPrime + isPrimenumber(index);
	}
	printf("%d",numPrime);
}

int isPrimenumber(int integer){

	int starter;

	for(starter=2;(double)starter<=sqrt(integer);starter++){
		if(integer % starter == 0){
			return 0;
		}
	}
	return 1;
}
