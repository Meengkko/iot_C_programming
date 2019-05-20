#include <stdio.h>

int main(void){

	int input_number1, input_number2;

	scanf("%d %d",&input_number1, &input_number2);

	for(input_number1; input_number1<=input_number2; input_number1++)
	{
		if(input_number1 % 5 == 0 && input_number1 % 11 == 0)
			printf("FizzBuzz\n",input_number1);
		else if(input_number1 % 5 == 0)
			printf("Fizz\n");
		else if(input_number1 % 11 == 0)
			printf("Buzz\n");
		else
			printf("%d\n",input_number1);
	}
	return 0;
}
