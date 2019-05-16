#include <stdio.h>

void main(){

	int Large_n;
	int integer;
	int total_sum = 0;
	int index_of_sum = 1;

	printf("몇 개의 정수를 입력하시겠습니까? :");
	scanf("%d",&Large_n);
	printf("\n");

	while(index_of_sum <= Large_n)
	{
		printf("총합에 들어갈 정수를 입력하여 주십시오: ");
		scanf("%d",	&integer);

		total_sum = total_sum + integer;
		index_of_sum = index_of_sum + 1;	
	}

	printf("\n입력하신 정수의 평균은 %5.2f 입니다.",(float)total_sum/Large_n);
}
