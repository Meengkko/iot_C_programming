#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define GIVEN_NUMBER 45

void main() {
	
	int pascalLayer[GIVEN_NUMBER] = { 1 };
	int temp;
	int index;

	while (!pascalLayer[GIVEN_NUMBER-1]) {
		for (index = 0; index < 45; index++) {
			if (index != 0) {
				if (index == 1) {
					temp = pascalLayer[index];
					pascalLayer[index] += 1;
				}

			}

			if(pascalLayer[index + 1] == 0) {
				pascalLayer[index + 1] = 1;
				break;
			}
		}
	}

}