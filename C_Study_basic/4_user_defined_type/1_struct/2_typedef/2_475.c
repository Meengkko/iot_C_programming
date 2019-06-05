#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
}Person;

void main() {
	Point pos = { 10,20 };
	Person man = { "ÀÌ½Â±â", "010-1212-0001", 21 };

	system("chcp 949");

	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNum, man.age);
}
