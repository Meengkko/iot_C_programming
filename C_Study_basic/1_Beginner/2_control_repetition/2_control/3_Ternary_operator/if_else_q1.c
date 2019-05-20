#include <stdio.h>

void main(){
	
	int integerSeries;

	printf("\n1이상 100미만의 정수 중\n\n7의 배수이거나 9의 배수인 정수가 출력됩니다.\n\n==>\n\n");

	for(integerSeries=1; integerSeries<100; integerSeries++){
		if(integerSeries % 7 == 0 || integerSeries % 9 == 0){
		// 중요한 조건일수록 앞에 둔다.
			printf("%d\t", integerSeries);
		} 
	}
}
