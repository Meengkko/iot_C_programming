#include <stdio.h>

void main(){
	int start_integer;
	int end_integer;
	int totalSum=0;

	printf("두 정수를 입력하십시오.(예:n1 n2)(조건:n1 > n2): ");
        scanf("%d %d",&start_integer, &end_integer);

	for(start_integer; start_integer <= end_integer; start_integer++){
		totalSum = totalSum + start_integer;
	}
	printf("\n두 정수를 포함하여 사이에 있는 모든 값의 총합 : %d",totalSum);
}
