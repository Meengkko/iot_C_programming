#include <stdio.h>

void main(){
	int small_n;
	int factorial = 1;
	int starting = 1;

	printf("\nInsert an integer(bigger than 3)\n\nThis program provides the consequence of factorial of it\n\n==> ");
	scanf("%d",&small_n);
	
	for(starting; starting <= small_n; starting++){
		factorial = factorial * starting;
	}

	printf("\n%d(%d!) = 1 x 2 x ..... x %d\n",factorial,small_n,small_n);
}
