#include <stdio.h>

int Fibonacci(int index);

void main(){
	
	int fibNumber = 1;
	int fibEvenSum = 0;

	while(Fibonacci(fibNumber)<=4000000){
		if(Fibonacci(fibNumber)%2==0){
			fibEvenSum = fibEvenSum + Fibonacci(fibNumber);
		}
		fibNumber = fibNumber + 1;
	}
	printf("%d",fibEvenSum);
}

int Fibonacci(int index){

	int temp;
	int countIndex=0;
	int fibZero=1;
	int fibOne=2;

	if(index==1){
		return fibZero;
	}else if(index==2){
		return fibOne;
	}else{
		for(countIndex;countIndex<index-2;countIndex++){
			temp = fibOne;
			fibOne = fibZero + fibOne;
			fibZero = temp;
		}
		return fibOne;
	}
}
