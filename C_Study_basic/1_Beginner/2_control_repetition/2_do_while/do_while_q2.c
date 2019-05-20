#include <stdio.h>

void main(){
	int sumEvenNumber = 0;
	int evenInteger = 0;

	do{
		evenInteger = evenInteger + 2;
		sumEvenNumber = sumEvenNumber + evenInteger;
	
	}while(evenInteger < 100);

	printf("\nTotal sum of even number between 0 to 100 : %d\n", sumEvenNumber);
}
