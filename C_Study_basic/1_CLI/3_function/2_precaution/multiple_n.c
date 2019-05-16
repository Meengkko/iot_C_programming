#include <stdio.h>

int discrimination(int subject, int n);

void main(){
	
	int nTimes;
	int multiplesQ;
	int primeNumber;
		
	scanf("%d",&nTimes);
	while(times>0){
		scanf("%d %d",&multiplesQ, &primeNumber);
		printf("%d\n",discrimination(multiplesQ, primeNumber));
		nTimes = nTimes - 1;
	}
}

int discrimination(int subject, int n){

	while(subject>n){
		subject = subject-n;
	}

	if(subject == n){
		return 1;
	}else{
		return 0;
	}
}
