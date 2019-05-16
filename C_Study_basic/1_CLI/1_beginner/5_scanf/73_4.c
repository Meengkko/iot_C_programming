#include <stdio.h>

void main(){
	
	int numerator, denominator ,portion ,remainder;
		
	printf("두 정수를 입력하세요(피제수,제수): ");
  	scanf("%d,%d",&numerator, &denominator);

	portion = numerator/denominator;
	remainder = numerator%denominator;

	printf("\n");
	printf("몫: %d, 나머지: %d", portion, remainder);
}
