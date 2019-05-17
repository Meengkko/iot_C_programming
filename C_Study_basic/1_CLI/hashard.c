#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void main() {
    int digit=0;
    int digitSum = 0;
	int number;
    int temp;

	scanf("%d",&number);

    temp = number;
    while (number > 10) {
        digit = number % 10;
        digitSum = digitSum + digit;
        number = number / 10;
    }
    digitSum = digitSum + number;
    number = temp;
    if (number % digitSum == 0) {
        printf("true");
    }
    else {
        printf("false");
    }
}
