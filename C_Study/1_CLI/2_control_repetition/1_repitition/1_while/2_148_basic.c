#include <stdio.h>

void main(){
	int world = 7;	
	int number = 1;
	printf("World sector: %d\n",world);
	while(number <= 50){
		printf("%-3d %15s\n", number, "Hello guest!");
		number++;
	}
}
