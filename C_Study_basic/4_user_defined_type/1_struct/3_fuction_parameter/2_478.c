#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

void ShowPosition(struct point pos){
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

// Point라는 구조체를 반환하는 함수
struct point GetCurrentPosition(void){ 
	struct point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){
	struct point curPos = GetCurrentPosition();
	ShowPosition(curPos);
}
