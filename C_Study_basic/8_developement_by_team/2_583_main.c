#include <stdio.h>

extern void Increment();
extern int GetNum();
extern int num2;

int main(){

	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());

	printf("func -> num2 %d\n", num2);

	return 0;
}
