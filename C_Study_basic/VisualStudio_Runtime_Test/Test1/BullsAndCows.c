#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int candidNum[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int ObjNum[4];
	int index = 0;
	int Bulls;
	int Cows;

	while (index < 4) {
		srand((int)time(NULL));
		int selection = (rand()%10);
		if (candidNum[selection] != 9999) {
			ObjNum[index] = candidNum[selection];
			candidNum[selection] = 9999;
			index++;
		}
	}

}