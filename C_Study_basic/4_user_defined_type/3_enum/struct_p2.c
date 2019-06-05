#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct{
	int xpos;
	int ypos;
}Point;

typedef struct{
	Point p1;
	Point p2;
}rectangle;


Point GetPoint(void) {

	Point pnt;
	puts("Input an X position");
	scanf("%d", &pnt.xpos);
	puts("Input an Y position");
	scanf("%d", &pnt.ypos);

	return pnt;
}

rectangle MakeRectangle(Point PointA, Point PointB) {

	rectangle rec;
	rec.p1 = PointA;
	rec.p2 = PointB;

	return rec;
}

void ShowRec(rectangle rect) {

	if ((rect.p1.xpos == rect.p2.xpos) || (rect.p1.ypos == rect.p2.ypos)) {
		puts("Error: 사각형을 이루지 못하는 두 점입니다.");
		return;
	}

	int UpperX;
	int LowerX;
	int UpperY;
	int LowerY;

	if (rect.p1.xpos < rect.p2.xpos) {
		UpperX = rect.p1.xpos;
		LowerX = rect.p2.xpos;
	}else {
		UpperX = rect.p2.xpos;
		LowerX = rect.p1.xpos;
	}

	if (rect.p1.ypos < rect.p2.ypos) {
		UpperY = rect.p1.ypos;
		LowerY = rect.p2.ypos;
	}
	else {
		UpperY = rect.p2.ypos;
		LowerY = rect.p1.ypos;
	}

	printf("-----<사각형의 좌표>-----\n");
	printf("좌상단 X ,Y 좌표 : [%d, %d]\n", UpperX, UpperY);
	printf("우상단 X ,Y 좌표 : [%d, %d]\n", LowerX, UpperY);
	printf("좌하단 X ,Y 좌표 : [%d, %d]\n", UpperX, LowerY);
	printf("우하단 X ,Y 좌표 : [%d, %d]\n", LowerX, LowerY);
}

int RecArea(rectangle Rect) {

	int result;
	int DeltaX;
	int DeltaY;

	DeltaX = (Rect.p1.xpos - Rect.p2.xpos);
	DeltaY = (Rect.p1.ypos - Rect.p2.ypos);

	result = DeltaX * DeltaY;

	if (result < 0) {
		return result * (-1);
	}
	else if (result == 0) {
		printf("Error: 사각형을 이루지 못하는 좌표를 입력하셨습니다.\n");
		return (-1);
	}
	else {
		return result;
	}
}

void main() {

	Point pit1, pit2;
	rectangle rectan;
	
	system("chcp 949");
	printf("<First point>\n\n");
	pit1 = GetPoint();
	printf("\n<Second point>\n\n");
	pit2 = GetPoint();
	rectan = MakeRectangle(pit1, pit2);
	putchar('\n');
	ShowRec(rectan);
	printf("\n사각형의 넓이 %d\n", RecArea(rectan));
}