#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

/*

typedef struct point{
	int xpos;
	int ypos;
}Point;

// typedef [기존의 형] [새로운 형]

*/

typedef struct{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos){
	printf("전달 받은 원본값 [%d, %d] \n", pos.xpos, pos.ypos);
	pos.xpos += 10;
	pos.ypos += 10;
	printf("ShowPosition에서 수정 [%d, %d] \n", pos.xpos, pos.ypos);
}

// Point라는 구조체를 반환하는 함수
Point GetCurrentPosition(void){ 
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){

	system("chcp 949");

// 구조체는 대입 연산이 가능하다.
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);

	printf("main 함수에서 좌표 확인 [%d, %d] \n", curPos.xpos, curPos.ypos);
}