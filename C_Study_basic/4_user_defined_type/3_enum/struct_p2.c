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
		puts("Error: �簢���� �̷��� ���ϴ� �� ���Դϴ�.");
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

	printf("-----<�簢���� ��ǥ>-----\n");
	printf("�»�� X ,Y ��ǥ : [%d, %d]\n", UpperX, UpperY);
	printf("���� X ,Y ��ǥ : [%d, %d]\n", LowerX, UpperY);
	printf("���ϴ� X ,Y ��ǥ : [%d, %d]\n", UpperX, LowerY);
	printf("���ϴ� X ,Y ��ǥ : [%d, %d]\n", LowerX, LowerY);
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
		printf("Error: �簢���� �̷��� ���ϴ� ��ǥ�� �Է��ϼ̽��ϴ�.\n");
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
	printf("\n�簢���� ���� %d\n", RecArea(rectan));
}