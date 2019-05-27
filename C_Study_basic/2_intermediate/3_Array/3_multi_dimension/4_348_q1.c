#include <stdio.h>

void main(){
	int arr[3][9];
	int i, j;

	// 备备窜 历厘
	for(i=0; i<3; i++){
		for(j=0; j<9; j++){
			arr[i][j] = (i+2) * (j+1);
		}
	}

	// 备备窜 免仿
	for(i=0; i<3; i++){
		for(j=0; j<9; j++){
			printf("%4d", arr[i][j]);	
		}
		printf("\n");
	}
}
