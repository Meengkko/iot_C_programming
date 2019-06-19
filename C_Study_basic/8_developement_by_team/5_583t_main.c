#include <stdio.h>
#include "8_func.h"

int main(){
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	return 0;
}
