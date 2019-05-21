#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	int number[5]; // 굳이 복수형으로 짓지말자(헷갈릴 수 있음)
	int index = 0;
	int max;
	int min;
	int total = 0;
	int length;

	length = sizeof(numbers)/sizeof(int);

	for(;index<length;index++){
		printf("%d번째 정수를 입력하십시오: ", index+1);
		scanf("%d",&numbers[index]);
	}
	
	max = numbers[0];
	min = numbers[0];
	
	for(index=0;index<length;index++){
		if(max<numbers[index]){
			max = numbers[index];
		}
		if(min>numbers[index]){
			min = numbers[index];
		}
		total = total + numbers[index];
	}
	putchar('\n');
	printf("입력받은 정수 배열의 최댓값: %d\n", max);
	printf("입력받은 정수 배열의 최소값: %d\n", min);
	printf("입력받은 정수 배열의 총합: %d\n", total);
}
