#include <stdio.h>

void main(){
	int year=0;  // 수감년도
	int sentence_year=20;  // 구형량
	int jail_break_year=7; // 탈옥가능년도
	int physical_level=0;  // 체력

	printf("\n%d년 형량을 받아 입소합니다.\n\n",sentence_year);
	while(1){
		year++;
		if(year % 2 == 0){
			physical_level++;
		}
		printf("%d년 콩밥먹었습니다. 체력: %d \n\n", year, physical_level);
		if(year>jail_break_year){
			printf("탈출시도!\n");
			if(physical_level > 5){
				break; // 가장 가까운 10라인에 있는 while을 벗어나게 한다.
			}
		}
	}
	printf("탈출성공! \n");
}	
