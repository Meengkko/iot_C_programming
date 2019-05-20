#include <stdio.h>

void main(){
	
	int number_of_multiples = 0;
	int print_of_multiple = 0;
	int index = 1;

	printf("3의 배수를 몇번째까지 구하시겠습니까?: ");
	scanf("%d",&number_of_multiples);

	while(index <= number_of_multiples)
	{
		print_of_multiple = 3 * index;
		printf("%d ",print_of_multiple);
		index = index + 1;
	}
}
