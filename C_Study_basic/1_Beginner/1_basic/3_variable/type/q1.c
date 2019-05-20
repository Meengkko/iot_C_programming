#include <stdio.h>

void main(){
	
	int left_lower_x;
	int left_lower_y;
	int right_upper_x;
	int right_upper_y;
	int delta_x;
	int delta_y;
	int area_of_rectangular;

	printf("좌 하단의 x, y 좌표: ");
	scanf("%d %d",&left_lower_x, &left_lower_y);
	printf("우 상단의 x, y 좌표: ");
	scanf("%d %d",&right_upper_x, &right_upper_y);

	delta_x = right_upper_x - left_lower_x;
	delta_y = right_upper_y - left_lower_y;

	area_of_rectangular = delta_x * delta_y;

	printf("두 점이 이루는 직사각형의 넚이는 %d입니다.", area_of_rectangular);
}
