#include <stdio.h>

void main(){

	int positive_integer;
	int sum_of_multiples_of_three_and_five = 0;

	for(positive_integer = 1; positive_integer < 10; positive_integer++)
	{
    	if(positive_integer % 3 == 0 || positive_integer % 5 == 0)
      		sum_of_multiples_of_three_and_five = sum_of_multiples_of_three_and_five + positive_integer;
  	}
  	printf("Total sum of multiples of 3 and 5 : %d", sum_of_multiples_of_three_and_five);
}
