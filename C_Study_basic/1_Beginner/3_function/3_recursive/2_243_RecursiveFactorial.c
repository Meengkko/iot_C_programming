#include <stdio.h>
// 재귀함수는 탈출하는 조건이 명확하지 않으면
// 시스템 전체를 중지 시킬 수 있을 만큼 위험한 코드이다.
// 특히 임베디드 프로그램에서는 사용을 금지하고 있다.
// 재귀 함수 대신 반복문을 통하여 문제를 해결하는 것이 안전하다.
int Factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*Factorial(n-1);
	}
}

void main(){
	int count=0;
	int target_number=0;
	printf("숫자를 입력하세요: ");
	scanf("%d", &target_number);

	for(;count<=target_number;count++){
		printf("%d! = %d \n", count,Factorial(count));
	}
}
