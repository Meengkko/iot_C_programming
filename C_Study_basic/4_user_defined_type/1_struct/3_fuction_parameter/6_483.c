#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct {
	int xpos;
	int ypos;
} Point;
/*
Point AddPoint(Point pos1, Point pos2){
	Point Pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return Pos;
}

Point MinPoint(Point pos1, Point pos2){
	Point Pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return Pos;
}
*/

void AddPoint(Point *ptr1, Point *ptr2, Point *reptr){
	reptr->xpos = ptr1->xpos + ptr2->xpos;
	reptr->ypos = ptr1->ypos + ptr2->ypos;
}

// Call by Reference: 에러코드를 리턴(실전에서 많이 사용한다)
// ex) 0: 정상 수행, 1: 인자 값의 문제, 2: Segmentation Fault ..........
int MinPoint(Point *ptr1, Point *ptr2, Point *reptr){
	reptr->xpos = ptr1->xpos - ptr2->xpos;
	reptr->ypos = ptr1->ypos - ptr2->ypos;

	return 0;
}

void main() {

	Point pos1 = { 5, 6 };
	Point pos2 = { 2, 9 };
//	Point result;
	Point Pos;

	system("chcp 949");

//	result = AddPoint(pos1, pos2);
	AddPoint(&pos1, &pos2, &Pos);
	printf("[%d, %d] \n", Pos.xpos, Pos.ypos);
//	result = MinPoint(pos1, pos2);
	MinPoint(&pos1, &pos2, &Pos);
	printf("[%d, %d] \n", Pos.xpos, Pos.ypos);
}
