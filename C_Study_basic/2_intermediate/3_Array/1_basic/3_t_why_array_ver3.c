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

	int number[5], total=0, average, index;
	const int max_count=5;

	for(index=0;index<max_count;index++){
		printf("%d번 숫자를 입력하세요: ", index+1);
		scanf("%d",&number[index]);
		total = total + number[index];
	}

	for(index=0;index<max_count;index++){
		printf("%d ", number[index]);
	}

	average = total/max_count;
	printf("총합: %d, 평균: %d\n", total, average);
	printf("%d 번째 숫자는 %d 입니다.\n",3, number[2]);

	printf("다시 조회하고 싶은 수의 순서를 입력하세요: ");
	scanf("%d", &index);
	printf("%d 번째 숫자는 %d 입니다.", index, number[index-1]);
}
