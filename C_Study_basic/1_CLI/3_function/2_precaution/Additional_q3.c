#include <stdio.h>

int countingThree(int integer);

void main(){

	int input_integer;

	scanf("%d",&input_integer);
	printf("%d",countingThree(input_integer));
}

int countingThree(int integer){

	int temp;
	int threeCount=0;
	
	for(integer; integer>0;integer--){
		temp = integer;
		while(integer > 0){
			if(integer%10==3){
				threeCount = threeCount + 1;
			}
			integer = integer/10;
		}
		integer = temp;
	}
	return threeCount;
}
