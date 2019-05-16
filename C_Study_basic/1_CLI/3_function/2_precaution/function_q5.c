#include <stdio.h>

int Fibonacci(int n);

void main(){

	int index_Fib;
	int start_index;

	printf("피보나치 수열을 몇 번째까지 구하시겠습니까?: ");
	scanf("%d",&index_Fib);

	for(start_index=1;start_index<=index_Fib;start_index++){
		printf(" %d,",Fibonacci(start_index));
	}
	printf("\b ");
}

int Fibonacci(int n){
	
	int fibOne = 0;
	int fibTwo = 1;
	int SeqIndex;
	int temp;

	if(n == 1){
		return fibOne;
	}else if(n == 2){
		return fibTwo;
	}
	
	for(SeqIndex = 0; SeqIndex < n-2; SeqIndex++){
		temp = fibTwo;
		fibTwo = fibTwo + fibOne;
		fibOne = temp;
	}
	return fibTwo;
}
