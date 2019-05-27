#include <stdio.h>

void main(){

	int DecimalNumber;
	int BinaryDigit=0;
	int PowerOfTwo=1;

	printf("10진수 정수 입력: ");
	scanf("%d", &DecimalNumber);

	while(DecimalNumber >= PowerOfTwo){
		PowerOfTwo = PowerOfTwo * 2;
		BinaryDigit = BinaryDigit + 1;
	}

	PowerOfTwo = PowerOfTwo / 2;
	BinaryDigit = BinaryDigit - 1;
	DecimalNumber = DecimalNumber - PowerOfTwo;
	
	printf("%d",1);
	
	for(;BinaryDigit>0;BinaryDigit--){
		PowerOfTwo = PowerOfTwo / 2;
		if(DecimalNumber>=PowerOfTwo){
			printf("%d",1);
			DecimalNumber = DecimalNumber - PowerOfTwo;
			continue;
		}
		printf("%d",0);
	}
}
