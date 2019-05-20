#include <stdio.h>

void main(){
	int index_of_gugu = 9;
	int input_number_for_gugu = 0;
	int result_of_multiplication = 0;

	printf("원하시는 구구단을 입력하세요(2단~9단): ");
	scanf("%d",&input_number_for_gugu);

	printf("\n입력하신 수의 구구단을 역순으로 출력합니다.\n");
	
	while(index_of_gugu > 0)
	{
		result_of_multiplication =  input_number_for_gugu * index_of_gugu;
		printf("%d x %d = %d\n", input_number_for_gugu, index_of_gugu, result_of_multiplication);
		index_of_gugu = index_of_gugu - 1;
	}	
}
