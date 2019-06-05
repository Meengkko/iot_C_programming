#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

struct student_point {
	int x_position;
	int y_position;
};

void main() {

	system("chcp 949");

	struct student_point Sungmin, Sangwoo;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &Sungmin.x_position, &Sungmin.y_position);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &Sangwoo.x_position, &Sangwoo.y_position);

	// 두 점간의 거리 계산 공식
	distance = sqrt((double)(((Sungmin.x_position - Sangwoo.x_position) * (Sungmin.x_position - Sangwoo.x_position)) 
		+ ((Sungmin.y_position - Sangwoo.y_position) * (Sungmin.y_position - Sangwoo.y_position))));


	printf("두 점의 거리는 %g 입니다.\n", distance);
}
