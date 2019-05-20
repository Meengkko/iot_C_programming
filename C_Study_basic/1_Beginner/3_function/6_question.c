#include <stdio.h>

void main(){

	int input_second;
	int hours;
	int minutes;
	int seconds;	

	printf("ÃÊ(second) ÀÔ·Â: ");
	scanf("%d",&input_second);

	hours = input_second/3600;
	input_second = input_second - (hours*3600);

	minutes = input_second/60;
	seconds = input_second - (minutes*60);

	printf("[h:%d, m:%d, s:%d]",hours, minutes, seconds);
}
