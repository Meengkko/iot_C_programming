#include <stdio.h>

void main(){
	
	int current_times = 2;
	int multiplier = 1;

	printf("�������� ����!\n\n");

	do{
		printf("=== %d�� ===\n\n",current_times);
		do{
			printf("%d * %d = %d \n", current_times, multiplier, current_times * multiplier);
			multiplier = multiplier + 1;
		}while(multiplier < 10);	
		printf("\n");
		multiplier = 1;
		current_times = current_times + 1;
	}while(current_times < 10);
}
