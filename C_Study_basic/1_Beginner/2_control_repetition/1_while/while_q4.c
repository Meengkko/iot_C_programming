#include <stdio.h>

void main(){
	int index_of_gugu = 9;
	int input_number_for_gugu = 0;
	int result_of_multiplication = 0;

	printf("���Ͻô� �������� �Է��ϼ���(2��~9��): ");
	scanf("%d",&input_number_for_gugu);

	printf("\n�Է��Ͻ� ���� �������� �������� ����մϴ�.\n");
	
	while(index_of_gugu > 0)
	{
		result_of_multiplication =  input_number_for_gugu * index_of_gugu;
		printf("%d x %d = %d\n", input_number_for_gugu, index_of_gugu, result_of_multiplication);
		index_of_gugu = index_of_gugu - 1;
	}	
}
