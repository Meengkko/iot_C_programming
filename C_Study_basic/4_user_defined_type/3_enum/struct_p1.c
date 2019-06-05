#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct{
	int xpos;
	int ypos;
}Point;

void SwapPoint(Point * p1, Point * p2);
void ShowPoint(Point point);

void main() {

	Point pos1 = {2, 4};
	Point pos2 = {5, 7};
	Point *Pptr1 = &pos1;
	Point *Pptr2 = &pos2;

	system("chcp 949");

	printf("*pos1*\n");
	ShowPoint(pos1);
	printf("*pos2*\n");
	ShowPoint(pos2);

	SwapPoint(Pptr1, Pptr2);

	printf("\n\n*pos1*\n");
	ShowPoint(pos1);
	printf("*pos2*\n");
	ShowPoint(pos2);

}

void SwapPoint(Point * p1, Point * p2){
	int temp = p2->xpos;
	p2->xpos = p1->xpos;
	p1->xpos = temp;
	
	temp = p2->ypos;
	p2->ypos = p1->ypos;
	p1->ypos = temp;
}

void ShowPoint(Point point){

	printf("[%d, %d] \n", point.xpos, point.ypos);

}
