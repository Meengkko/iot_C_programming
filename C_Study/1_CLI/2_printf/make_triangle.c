#include <stdio.h>

void main(){

	int i, j, k, width, iteration, num_blank, num_stars;
	
	
	printf("밑변을 입력하세요:");
	scanf("%d",&width);

	iteration = (width+1)/2+1;

	for(i=1 ; i<iteration ; i++)
	{
		num_blank = iteration - i;
		num_stars = (i-1)*2+2;
	
		for(j=1 ; j<num_blank ; j++)
			printf(" ");

		for(k=1 ; k<num_stars ; k++)
			printf("*");

		if (i != iteration-1)
			printf("\n");
	}
}
