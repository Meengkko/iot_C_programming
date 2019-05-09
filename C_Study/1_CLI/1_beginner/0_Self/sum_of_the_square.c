#include <stdio.h>

int main(){

	int positive_integer;
	int sum_of_integer = 0;
	int sum_of_square = 0;
	int square_of_the_sum;

	for(positive_integer = 0; positive_integer <= 100; positive_integer++)
	{
  		sum_of_integer = sum_of_integer + positive_integer;
    	sum_of_square = sum_of_square + (positive_integer*positive_integer);
  	}
  	square_of_the_sum = (sum_of_integer*sum_of_integer);
  
  	printf("%d",square_of_the_sum - sum_of_square);

	return 0;
}
