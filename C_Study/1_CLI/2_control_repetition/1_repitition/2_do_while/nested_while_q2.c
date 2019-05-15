#include <stdio.h>

void main(){

	int layerAndStar = 1;				  //이 변수는 1씩 증가하며 행의 순서를 규정하고 끝에 별을 추가하는데 쓰입니다. 
	int circles = 1;					  //이 변수는 위 변수와 비교되며 추가되는 동그라미의 갯수를 규정합니다.
	
	while(layerAndStar<=5){               //layerAndStar는 초기값이 1이며 18번 라인에서 1씩 추가됩니다.
		circles  = 1;                     //circles는 여기서 1로 계속 초기화되어 11번 while문에서 layerAndStar와
	   									  //비교되는 횟수만큼 동그라미를 추가하는 인덱스로 작용합니다.
		while(circles  < layerAndStar){   
			printf("○");
			circles = circles + 1;        //circles는 이곳에서 1씩 증가하여 행마다 추가되는 동그라미 갯수를 지정
										  //예를들어 3번 행에는 동그라미 2개, 5번행에는 동그라미 4개 
		}
		printf("*\n");					  //왼쪽부터 추가된 동그라미 끝에 별이 추가되고 줄이 바뀝니다.
										  //동그라미가 없는 첫번째 행에는 별만 추가되어 꼭대기를 만듭니다.
		layerAndStar = layerAndStar + 1;
	}
}
