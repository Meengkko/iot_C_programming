#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle* cptr) {
	// cptr�� �ּ��̱� ������ �Ʒ��� �Ұ����� ����
	// cptr.cen;
	(cptr->cen.xpos)
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

void main() {

	Circle c1 = { {1, 2}, 3.5 };
	Circle c2 = { 2, 4, 3.9 };

	system("chcp 949");

	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	// c1�� �ּҰ� �ƴϱ� ������ -> �� �������� �ʴ´�.
	// c1->rad

	// ������ ����
	c1.rad;
	c1.cen.xpos;
	c1.cen.ypos;
}