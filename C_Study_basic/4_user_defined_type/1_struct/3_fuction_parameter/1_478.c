#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

/*

typedef struct point{
	int xpos;
	int ypos;
}Point;

// typedef [������ ��] [���ο� ��]

*/

typedef struct{
	int xpos;
	int ypos;
}Point;

void ShowPosition(Point pos){
	printf("���� ���� ������ [%d, %d] \n", pos.xpos, pos.ypos);
	pos.xpos += 10;
	pos.ypos += 10;
	printf("ShowPosition���� ���� [%d, %d] \n", pos.xpos, pos.ypos);
}

// Point��� ����ü�� ��ȯ�ϴ� �Լ�
Point GetCurrentPosition(void){ 
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){

	system("chcp 949");

// ����ü�� ���� ������ �����ϴ�.
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);

	printf("main �Լ����� ��ǥ Ȯ�� [%d, %d] \n", curPos.xpos, curPos.ypos);
}