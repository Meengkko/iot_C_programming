#include <stdio.h>
/*
=======화면 요구 사항=======
첫 번째 숫자를 입력하세요: 23
두 번째 숫자를 입력하세요: 34
세 번째 숫자를 입력하세요: 45
네 번째 숫자를 입력하세요: 56
다섯 번째 숫자를 입력하세요: 67
총합: 225, 평균: 45
세 번째 숫자는 45 입니다. 
*/


void main(){

	int number, total=0, average, index;
	int max_count=5;

	for(index=0;index<max_count;index++){
		printf("%d번 숫자를 입력하세요: ", index+1);
		scanf("%d",&number);
		total = total + number;
	}
	/* 아래 화면 출력 요구사항을 구현하기가 어려움
	   printf("입력한 숫자(입력 순서대로 정렬): %d %d %d %d %d\n",
	  							 number1, number2, number3, number4, number5);

	   입력한 숫자(입력 순서대로 정렬): 23 34 45 56 67
	*/

	average = total/max_count;
	printf("총합: %d, 평균: %d\n", total, average);
	/* 아래 화면 출력 요구사항을 기존 방식대로 할 셩우 구현하기가 어려움
 	   세번째 숫자는 3 입니다.
	   printf("세 번째 숫자는 %d 입니다.", number3);
	*/
}
