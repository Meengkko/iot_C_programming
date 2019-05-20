#include <stdio.h>
// 구구단: multiplication table, (informal) times tables
void main(){
	int multiplication = 0, num = 1;
	printf("몇 단? ");
	scanf("%d", &multiplication);

	while(num<10){
		printf("%d * %d = %d\n", multiplication, num, multiplication*num);
		num++;
	}
}
