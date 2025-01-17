#include <stdio.h>

void main(){
	int arr1[3][4];
	int i, j;

	arr1[0][0] = 1;
	arr1[0][1] = 7;
	arr1[0][2] = 11;
	arr1[0][3] = 2;

	arr1[1][0] = 3;
	arr1[1][1] = 4;
	arr1[1][2] = 9;
	arr1[1][3] = 21;
	
	arr1[2][0] = 5;
	arr1[2][1] = 13;
	arr1[2][2] = 18;
	arr1[2][3] = 15;

	printf("인덱스로 배열 초기화 종료\n");

	arr1[1][2] = 12;
	arr1[2][1] = 9;

	printf("%d\n", arr1[0][1]);
	printf("%d\n", arr1[0][3]);
	printf("%d\n", arr1[1][1]);
	printf("%d\n", arr1[2][1]);
	printf("%d\n", arr1[2][3]);

	printf("\n전체 배열 출력\n");
	// 여기서 i는 행을 접근하는 인덱스로 활용한다.
	// i<3 여기서 3은 행(Row)의 크기가 온다.
	// i는 행의 크기 -1까지 접근하는데 이는 배열의 인덱스가 0부터
	// 시작하기 때문에 'i<=행의 크기' 조건이 아닌 'i<행의 크기'로 처리한다.
	for (i = 0; i < 3; i++) {
	// 여기서 j는 열(Column)을 접근하는 인덱스로 활용한다.
	// j<4 여기서 4는 열(Column)의 크기가 온다.
	// j는 열의 크기 -1까지 접근하는데 이는 배열의 인덱스가 0부터
	// 시작하기 때문에 'j<=열의 크기' 조건이 아닌 'j<열의 크기'로 처리한다.
		for (j = 0; j < 4; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
}
