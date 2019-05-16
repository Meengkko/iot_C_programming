#include <stdio.h>

void main(){
	
	int input_number;

	printf("\n");
	printf("Input an integer here (exmaple:4) ");
	scanf("%d",&input_number);

	input_number <<= 4;
	
	printf("\n");
	printf("The number left-shifted for four times(x16): %d\n\n", input_number);

	input_number >>= 3;
	
	printf("Then the number right-shifted for three times(/8): %d\n", input_number);
}
