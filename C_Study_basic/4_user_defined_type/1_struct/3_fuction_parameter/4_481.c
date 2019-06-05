#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct {
	int xpos;
	int ypos;
} Point;

void OrgSymTrans(Point* ptr) {
	ptr->xpos = (ptr->xpos) * (-1);
	ptr->ypos = (ptr->ypos) * (-1);
}

void ShowPosition(Point* ptr) {
	printf("[%d, %d] \n", ptr->xpos, ptr->ypos);
}

/*
void ShowPosition(Point* pos) {
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}
*/

void main() {

	system("chcp 949");

	Point pos = { 7, -5 };
	OrgSymTrans(&pos);
	ShowPosition(&pos);
	OrgSymTrans(&pos);
	ShowPosition(&pos);
}
