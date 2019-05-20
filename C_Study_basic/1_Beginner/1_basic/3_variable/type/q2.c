#include <stdio.h>

void main(){
	double input_double1;
	double input_double2;
	double sum_of_two_real_numbers;
	double subtraction_of_two_real_numbers;
	double multiplication_of_two_real_numbers;
	double division_of_two_real_numbers;

	printf("\nInput two real number: (example 5.0 3.8) ");
	scanf("%lf %lf",&input_double1, &input_double2);

	sum_of_two_real_numbers = input_double1 + input_double2;

	subtraction_of_two_real_numbers = input_double1 - input_double2;

	multiplication_of_two_real_numbers = input_double1 * input_double2;

	division_of_two_real_numbers = input_double1 / input_double2;

	printf("\nsum of %3.2f and %3.2f is ... %3.2f\n\n",input_double1,input_double2,sum_of_two_real_numbers);
	printf("subtraction of %3.2f and %3.2f is ... %3.2f\n\n",input_double1,input_double2,subtraction_of_two_real_numbers);
	printf("multiplication of %3.2f and %3.2f is ... %3.2f\n\n",input_double1,input_double2,multiplication_of_two_real_numbers);
	printf("division of %3.2f and %3.2f is ... %3.2f\n\n",input_double1,input_double2,division_of_two_real_numbers);
}
