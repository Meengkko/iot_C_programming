#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
}pos1, pos2, pos3;

void main() {
	pos1.xpos = 1;
	pos2.xpos = 2;
	
	printf("End\n");
}
